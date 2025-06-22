import os
import struct

OLD_METATILE_MASK  = 0b0000001111111111
OLD_COLLISION_MASK = 0b0000110000000000
OLD_ELEVATION_MASK = 0b1111000000000000

NEW_COLLISION_MASK = 0b0001
NEW_ELEVATION_MASK = 0b0111

def process_map_data(old_data, map_file):
    new_data = []
    
    for value in old_data:
        metatile_id = value & OLD_METATILE_MASK
        collision = (value & OLD_COLLISION_MASK) >> 10
        elevation = (value & OLD_ELEVATION_MASK) >> 12

        if elevation == 0xE or elevation == 0xD:
            print("FOUND ELEVATION: " + str(elevation))
            print(map_file)

    return new_data

def read_map_bin(file_path):
    with open(file_path, "rb") as f:
        data = f.read()
        return list(struct.unpack("<" + "H" * (len(data) // 2), data))

def find_map_files(file_name="map.bin"):
    map_files = []
    for root, dirs, files in os.walk("data/layouts"):
        for file in files:
            if file == file_name:
                map_files.append(os.path.join(root, file))
    return map_files

def process_all_maps():
    map_files = find_map_files("map.bin")
    for map_file in map_files:
        print(f"Processing {map_file}...")
        old_data = read_map_bin(map_file)
        new_data = process_map_data(old_data, map_file)

if __name__ == "__main__":
    process_all_maps()