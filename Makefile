main: tictactoe.cpp header.h
	g++ tictactoe.cpp header.h -o tictactoe -I.
clean:
	rm tictactoe
