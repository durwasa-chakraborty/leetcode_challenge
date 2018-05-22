#Employee Information
# def get_importance(self,employees,id):
    #     q = queue.Queue()
    #     total_importance = 0
    #     for employee in employees:
    #         total_importance+=employee.importance
    #         q.put([emp for emp in employee.subordinates])
    #         while not q.empty():
    #             size = q.qsize()
    #             for i in range(0,size):
    #                 front = q.get()
    #                 total_importance+=sum([employee.importance for employee in employees if employee.id == front])
    #                 emp_list = [employee.subordinates for employee in employees if (employee.id == front)]
    #                 q.put([emp for emp in emp_list])
    #     return total_importance


class Employee(object):
    def __init__(self,id,importance,subordinates):
        self.id = id
        self.importance = importance
        self.subordinates = subordinates

class Solution(object):
    def __init__(self):
        pass

    def get_importance(self,employees,id):
        dict = {}
        total_importance = 0

        for employee in employees:
            if employee.id == id:
                subordinate = employee.subordinates
                total_importance += employee.importance
            else :
                dict[employee.id] = [employee.importance,employee.subordinates]

        while subordinate :
            subordinate_id = subordinate.pop(0)
            total_importance+= dict[subordinate_id][0]
            if dict[subordinate_id][1]:
                subordinate.extend(dict[subordinate_id][1])
        return total_importance

def main():
    emp_1 = Employee(1,1,[2,3])
    emp_2 = Employee(2,2,[])
    emp_3 = Employee(3,3,[])

    employees = [emp_1,emp_2,emp_3]
    
    sol = Solution()
    print sol.get_importance(employees,1)



if __name__=="__main__":
    main()

