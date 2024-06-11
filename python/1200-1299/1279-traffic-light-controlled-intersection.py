from threading import Lock


class TrafficLight:
    def __init__(self):
        self.lock = Lock()
        self.road = 1

    def carArrived(
        self,
        carId: int, 
       
        roadId: int,
        direction: int,  
     
        turnGreen: 'Callable[[], None]',
        
        crossCar: 'Callable[[], None]',
    ) -> None:
        self.lock.acquire()
        if self.road != roadId:
            self.road = roadId
            turnGreen()
        crossCar()
        self.lock.release()
