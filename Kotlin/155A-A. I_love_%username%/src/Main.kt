/**
 * Created by Mego on 5/29/2017.
 */

fun main(args: Array<String>) {

    var numberOfAmazing = 0

    val numberOfContests: Int = readLine()!!.toInt()
    var scores = readLine()!!.split(" ")

    var high = scores[0].toInt()
    var low = scores[0].toInt()


    for (i in 0..scores.size - 1) {
        if (scores[i].toInt() > high) {
            numberOfAmazing++
            high = scores[i].toInt()
        } else if (scores[i].toInt() < low) {
            numberOfAmazing++
            low = scores[i].toInt()
        }
    }
    println(numberOfAmazing)
}
