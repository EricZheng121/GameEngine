struct Button_State {
  bool is_down;
  bool changed;
};

enum {
  BUTTON_UP,
  BUTTON_DOWN,
  BUTTON_LEFT,
  BUTTON_RIGHT,

  BUTTON_SPACEBAR,
  BUTTON_ENTER,
  BUTTON_ESCAPE,
  BUTTON_COUNT, //Should be the last item, used for keeping track for array of buttons
};



enum COLORS {
  RED = 0xFF0000,
  BLUE = 0x0000FF,
  GREEN = 0x00FF00,
  BLACK = 0x000000,
  WHITE = 0xFFFFFF,
  YELLOW = 0xFFFF00,
  GOLD = 0xFFD700,
  PURPLE = 0x800080,
  GRAY = 0x808080,
  TEAL = 0x008080,
  NAVY = 0x000080,
  LIGHTPINK = 0xFFB6C1,
  MAGENTA = 0xEE00EE,
  TURQUOISE = 0x00F5FF,
  DARKGREEN = 0x006400,
  ORANGE = 0xFFA500,
  BROWN = 0x8B4513,
};

struct Input {
  Button_State buttons[BUTTON_COUNT];
};



enum charType {
  alpha,
  symbol,
  integer,
  space,
  neither,
};

enum Font {
  square,
  circle,
  triangle,
  ticket,
};


const char* alphabet[26][7] = {
	"   *   ",
	" *   * ",
	"*     *",
	"*******",
	"*     *",
	"*     *",
	"*     *",

	"****** ",
	"*     *",
	"*     *",
	"****** ",
	"*     *",
	"*     *",
	"****** ",

	" ***** ",
	"*     *",
	"*      ",
	"*      ",
	"*      ",
	"*     *",
	" ***** ",

	"****** ",
	"*     *",
	"*     *",
	"*     *",
	"*     *",
	"*     *",
	"****** ",

	"*******",
	"*      ",
	"*      ",
	"*******",
	"*      ",
	"*      ",
	"*******",

	"*******",
	"*      ",
	"*      ",
	"*******",
	"*      ",
	"*      ",
	"*      ",

	" ***** ",
	"*     *",
	"*      ",
	"*  ****",
	"*     *",
	"*     *",
	" ***** ",

	"*     *",
	"*     *",
	"*     *",
	"*******",
	"*     *",
	"*     *",
	"*     *",

	"*******",
	"   *   ",
	"   *   ",
	"   *   ",
	"   *   ",
	"   *   ",
	"*******",

	"*******",
	"   *   ",
	"    *  ",
	"    *  ",
	"    *  ",
	"*   *  ",
	" ***   ",


	"*     *",
	"*   *  ",
	"* *    ",
	"**     ",
	"* *    ",
	"*   *  ",
	"*     *",

	"*      ",
	"*      ",
	"*      ",
	"*      ",
	"*      ",
	"*      ",
	"*******",


	"*     *",
	"* * * *",
	"*  *  *",
	"*     *",
	"*     *",
	"*     *",
	"*     *",


	"*     *",
	"**    *",
	"* *   *",
	"*  *  *",
	"*   * *",
	"*    **",
	"*     *",


	"*******",
	"*     *",
	"*     *",
	"*     *",
	"*     *",
	"*     *",
	"*******",

	"****** ",
	"*     *",
	"*     *",
	"****** ",
	"*      ",
	"*      ",
	"*      ",


	"*******",
	"*     *",
	"*     *",
	"*     *",
	"*  *  *",
	"*******",
	"      *",

	"****** ",
	"*     *",
	"*     *",
	"****** ",
	"*  *   ",
	"*   *  ",
	"*    * ",

	"*******",
	"*      ",
	"*      ",
	"*******",
	"      *",
	"      *",
	"*******",

	"*******",
	"   *   ",
	"   *   ",
	"   *   ",
	"   *   ",
	"   *   ",
	"   *   ",


	"*     *",
	"*     *",
	"*     *",
	"*     *",
	"*     *",
	"*     *",
	"*******",

	"*     *",
	"*     *",
	"*     *",
	"*     *",
	" *   * ",
	"  * *  ",
	"   *   ",

	"*     *",
	"*     *",
	"*     *",
	"*     *",
	"*  *  *",
	"* * * *",
	"*     *",

	"*     *",
	" *   * ",
	"  * *  ",
	"   *   ",
	"  * *  ",
	" *   * ",
	"*     *",


	"*     *",
	" *   * ",
	"  * *  ",
	"   *   ",
	"   *   ",
	"   *   ",
	"   *   ",

	"*******",
	"     * ",
	"    *  ",
	"   *   ",
	"  *    ",
	" *     ",
	"*******",

};

const char* symbols[15][7] = {
  " *  ",
  " *  ",
  " *  ",
  " *  ",
  "    ",
  "*** ",
  "*** ",


  "*  *  ",
  "*  *  ",
  "*  *  ",
  " *  * ",
  "      ",
  "      ",
  "      ",

  " *   * ",
  " *   * ",
  "*******",
  " *   * ",
  "*******",
  " *   * ",
  " *   * ",

  "   *   ",
  "*******",
  "*  *   ",
  "*******",
  "   *  *",
  "*******",
  "   *   ",

  "***   *",
  "* *  * ",
  "*** *  ",
  "   *   ",
  "  * ***",
  " *  * *",
  "*   ***",


  " ***     ",
  "*   *    ",
  " *  *    ",
  "  **     ",
  " *  *    ",
  "*   * *  ",
  " ***   * ",



  "  * ",
  "  * ",
  "  * ",
  " *  ",
  "    ",
  "    ",
  "    ",


  "   * ",
  "  *  ",
  " *   ",
  " *   ",
  " *   ",
  "  *  ",
  "   * ",

  " *   ",
  "  *  ",
  "   * ",
  "   * ",
  "   * ",
  "  *  ",
  " *   ",

  "       ",
  "       ",
  " * * * ",
  "  ***  ",
  " * * * ",
  "       ",
  "       ",

  "       ",
  "       ",
  "   *   ",
  " ***** ",
  "   *   ",
  "       ",
  "       ",


  "    ",
  "    ",
  "    ",
  "    ",
  " *  ",
  " *  ",
  "*   ",

  "       ",
  "       ",
  "       ",
  " ***** ",
  "       ",
  "       ",
  "       ",

  "    ",
  "    ",
  "    ",
  "    ",
  "    ",
  "*** ",
  "*** ",


  "      *",
  "     * ",
  "    *  ",
  "   *   ",
  "  *    ",
  " *     ",
  "*      ",
};

const char* numbers[10][5] = {
  "****",
  "*  *",
  "*  *",
  "*  *",
  "****",

  "*** ",
  "  * ",
  "  * ",
  "  * ",
  "****",

  "****",
  "   *",
  "****",
  "*   ",
  "****",

  "****",
  "   *",
  "****",
  "   *",
  "****",

  "*  *",
  "*  *",
  "****",
  "   *",
  "   *",

  "****",
  "*   ",
  "****",
  "   *",
  "****",

  "*   ",
  "*   ",
  "****",
  "*  *",
  "****",

  "****",
  "   *",
  "   *",
  "   *",
  "   *",

  "****",
  "*  *",
  "****",
  "*  *",
  "****",

  "****",
  "*  *",
  "****",
  "   *",
  "   *",
};
