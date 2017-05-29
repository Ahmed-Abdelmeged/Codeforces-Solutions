/**
 * Created by Mego on 5/29/2017.
 */
fun main(args: Array<String>) {

    val firstLayer = "I hate"
    val secondLayer = "I love"
    var output: String = firstLayer

    val n = readLine()!!.toInt()
    for (i in 0..n-2) {
        if (n > 1) {
            if (i % 2 == 0) {
                output = output + " that " + secondLayer
            } else {
                output = output + " that " + firstLayer
            }
        }
    }
    println(output + " it")
}