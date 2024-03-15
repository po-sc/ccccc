import UIKit

class ViewController: UIViewController {

    @IBOutlet weak var displayLabel: UILabel!

    var currentValue: Double = 0.0
    var previousValue: Double = 0.0
    var memoryValue: Double = 0.0
    var operation: String = ""
    var userIsTyping: Bool = false

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    }

    @IBAction func digitButtonPressed(_ sender: UIButton) {
        let digit = sender.currentTitle!
        if userIsTyping {
            displayLabel.text! += digit
        } else {
            displayLabel.text! = digit
            userIsTyping = true
        }
    }

    @IBAction func clearButtonPressed(_ sender: UIButton) {
        currentValue = 0.0
        previousValue = 0.0
        memoryValue = 0.0
        operation = ""
        userIsTyping = false
        displayLabel.text! = "0"
    }

    @IBAction func memoryPlusButtonPressed(_ sender: UIButton) {
        memoryValue += currentValue
        userIsTyping = false
    }

    @IBAction func memoryMinusButtonPressed(_ sender: UIButton) {
        memoryValue -= currentValue
        userIsTyping = false
    }

    @IBAction func memoryRecallButtonPressed(_ sender: UIButton) {
        currentValue = memoryValue
        displayLabel.text! = String(currentValue)
        userIsTyping = false
    }

    @IBAction func operationButtonPressed(_ sender: UIButton) {
        if userIsTyping {
            previousValue = currentValue
            currentValue = Double(displayLabel.text!)!
            userIsTyping = false
        }

        switch sender.currentTitle! {
        case "+":
            operation = "+"
        case "-":
            operation = "-"
        case "×":
            operation = "×"
        case "÷":
            operation = "÷"
        default:
            break
        }
    }

    @IBAction func equalsButtonPressed(_ sender: UIButton) {
        if userIsTyping {
            previousValue = currentValue
            currentValue = Double(displayLabel.text!)!
            userIsTyping = false
        }

        switch operation {
        case "+":
            currentValue = previousValue + currentValue
        case "-":
            currentValue = previousValue - currentValue
        case "×":
            currentValue = previousValue * currentValue
        case "÷":
            currentValue = previousValue / currentValue
        default:
            break
        }

        displayLabel.text! = String(currentValue)
        userIsTyping = false
    }
}

