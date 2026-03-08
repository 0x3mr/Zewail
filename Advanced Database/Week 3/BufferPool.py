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

    def evict(self):
        victim = self.frames.pop(0) # LRU
        del self.page_table[victim]