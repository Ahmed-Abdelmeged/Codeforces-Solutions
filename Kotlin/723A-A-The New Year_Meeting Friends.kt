/**
 * Created by Mego on 5/29/2017.
 */
fun main(args: Array<String>) {
    val input = readLine()!!.split(" ")
    var inputInt = arrayListOf<Int>()

    for (i in 0..input.size - 1) {
        inputInt.add(input[i].toInt())
    }
    val mid = (inputInt.sorted())[1]
    val numberOfSteps = (Math.abs(mid - inputInt[0]) + Math.abs(mid - inputInt[1]) + Math.abs(mid - inputInt[2]))
    println(numberOfSteps)
}
