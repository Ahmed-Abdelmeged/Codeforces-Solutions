/**
 * Created by Mego on 5/30/2017.
 */

fun main(args: Array<String>) {
    val n = readLine()!!.toInt()
    var games = readLine().toString()
    var antonWons: Int = 0
    var danikWons: Int = 0
    for (i in 0..games.length - 1) {
        if (games[i] == 'A') {
            antonWons++
        } else if (games[i] == 'D') {
            danikWons++
        }
    }

    if (antonWons == danikWons) {
        println("Friendship")
    } else {
        println(if (antonWons > danikWons) "Anton" else "Danik")
    }
}