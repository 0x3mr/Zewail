class BufferPool:
    def __init__(self, size):
        self.size = size
        self.frames = []
        self.page_table = {}
    
    def fetch_page(self, page_id):
        if (page_id in self.page_table):
            print("HIT")
        else:
            print("MISS")
        
            if (len(self.frames) == self.size):
                self.evict()
            
            self.frames.append(page_id)
            self.page_table[page_id] = True

            if (self.page_table[page_id]):
                print("Successfully added a new table!")

    def evict(self):
        victim = self.frames.pop(0) # LRU
        del self.page_table[victim]

bufferPool = BufferPool(5)

bufferPool.fetch_page(1009)
bufferPool.fetch_page(1010)
bufferPool.fetch_page(1011)
bufferPool.fetch_page(1012)
bufferPool.fetch_page(1013)

print("---------------")

bufferPool.fetch_page(1009)
bufferPool.fetch_page(1010)

print("---------------")

bufferPool.fetch_page(1014)
bufferPool.fetch_page(1015)
bufferPool.fetch_page(1016)

