// Generated from Prog.g4 by ANTLR 4.5.1
// jshint ignore: start
var antlr4 = require('antlr4/index');
var ProgVisitor = require('./ProgVisitor').ProgVisitor;

var grammarFileName = "Prog.g4";

var serializedATN = ["\u0003\u0430\ud6d1\u8206\uad2d\u4417\uaef1\u8d80\uaadd",
    "\u0003(\u00fb\u0004\u0002\t\u0002\u0004\u0003\t\u0003\u0004\u0004\t",
    "\u0004\u0004\u0005\t\u0005\u0004\u0006\t\u0006\u0004\u0007\t\u0007\u0004",
    "\b\t\b\u0004\t\t\t\u0004\n\t\n\u0004\u000b\t\u000b\u0004\f\t\f\u0004",
    "\r\t\r\u0004\u000e\t\u000e\u0004\u000f\t\u000f\u0004\u0010\t\u0010\u0004",
    "\u0011\t\u0011\u0004\u0012\t\u0012\u0004\u0013\t\u0013\u0004\u0014\t",
    "\u0014\u0004\u0015\t\u0015\u0003\u0002\u0007\u0002,\n\u0002\f\u0002",
    "\u000e\u0002/\u000b\u0002\u0003\u0002\u0007\u00022\n\u0002\f\u0002\u000e",
    "\u00025\u000b\u0002\u0003\u0003\u0003\u0003\u0003\u0003\u0003\u0003",
    "\u0003\u0003\u0003\u0003\u0003\u0004\u0003\u0004\u0003\u0004\u0005\u0004",
    "@\n\u0004\u0003\u0004\u0003\u0004\u0003\u0005\u0003\u0005\u0003\u0005",
    "\u0003\u0005\u0007\u0005H\n\u0005\f\u0005\u000e\u0005K\u000b\u0005\u0003",
    "\u0005\u0007\u0005N\n\u0005\f\u0005\u000e\u0005Q\u000b\u0005\u0003\u0005",
    "\u0003\u0005\u0003\u0006\u0003\u0006\u0003\u0006\u0003\u0006\u0003\u0006",
    "\u0003\u0006\u0005\u0006[\n\u0006\u0003\u0007\u0003\u0007\u0005\u0007",
    "_\n\u0007\u0003\b\u0003\b\u0003\b\u0003\b\u0005\be\n\b\u0003\t\u0003",
    "\t\u0003\t\u0003\t\u0005\tk\n\t\u0003\n\u0003\n\u0003\n\u0003\n\u0003",
    "\u000b\u0003\u000b\u0007\u000bs\n\u000b\f\u000b\u000e\u000bv\u000b\u000b",
    "\u0003\u000b\u0003\u000b\u0003\f\u0003\f\u0003\f\u0003\r\u0003\r\u0003",
    "\u000e\u0003\u000e\u0003\u000e\u0003\u000e\u0003\u000e\u0003\u000e\u0003",
    "\u000e\u0003\u000e\u0003\u000e\u0003\u000e\u0005\u000e\u0089\n\u000e",
    "\u0003\u000f\u0003\u000f\u0005\u000f\u008d\n\u000f\u0003\u0010\u0003",
    "\u0010\u0003\u0010\u0007\u0010\u0092\n\u0010\f\u0010\u000e\u0010\u0095",
    "\u000b\u0010\u0003\u0011\u0003\u0011\u0003\u0011\u0003\u0012\u0003\u0012",
    "\u0003\u0012\u0007\u0012\u009d\n\u0012\f\u0012\u000e\u0012\u00a0\u000b",
    "\u0012\u0003\u0013\u0003\u0013\u0003\u0013\u0005\u0013\u00a5\n\u0013",
    "\u0003\u0014\u0003\u0014\u0003\u0014\u0005\u0014\u00aa\n\u0014\u0003",
    "\u0014\u0005\u0014\u00ad\n\u0014\u0003\u0015\u0003\u0015\u0003\u0015",
    "\u0003\u0015\u0003\u0015\u0003\u0015\u0003\u0015\u0003\u0015\u0003\u0015",
    "\u0003\u0015\u0003\u0015\u0003\u0015\u0003\u0015\u0003\u0015\u0003\u0015",
    "\u0003\u0015\u0003\u0015\u0003\u0015\u0003\u0015\u0003\u0015\u0003\u0015",
    "\u0003\u0015\u0003\u0015\u0003\u0015\u0003\u0015\u0003\u0015\u0005\u0015",
    "\u00c9\n\u0015\u0003\u0015\u0003\u0015\u0005\u0015\u00cd\n\u0015\u0003",
    "\u0015\u0003\u0015\u0003\u0015\u0003\u0015\u0003\u0015\u0003\u0015\u0003",
    "\u0015\u0003\u0015\u0003\u0015\u0003\u0015\u0003\u0015\u0003\u0015\u0003",
    "\u0015\u0003\u0015\u0003\u0015\u0003\u0015\u0003\u0015\u0003\u0015\u0003",
    "\u0015\u0003\u0015\u0003\u0015\u0003\u0015\u0003\u0015\u0003\u0015\u0003",
    "\u0015\u0003\u0015\u0003\u0015\u0003\u0015\u0003\u0015\u0003\u0015\u0003",
    "\u0015\u0003\u0015\u0003\u0015\u0003\u0015\u0003\u0015\u0003\u0015\u0003",
    "\u0015\u0003\u0015\u0003\u0015\u0007\u0015\u00f6\n\u0015\f\u0015\u000e",
    "\u0015\u00f9\u000b\u0015\u0003\u0015\u0002\u0003(\u0016\u0002\u0004",
    "\u0006\b\n\f\u000e\u0010\u0012\u0014\u0016\u0018\u001a\u001c\u001e ",
    "\"$&(\u0002\u0003\u0003\u0002\u001d\u001f\u0113\u0002-\u0003\u0002\u0002",
    "\u0002\u00046\u0003\u0002\u0002\u0002\u0006<\u0003\u0002\u0002\u0002",
    "\bC\u0003\u0002\u0002\u0002\nZ\u0003\u0002\u0002\u0002\f\\\u0003\u0002",
    "\u0002\u0002\u000e`\u0003\u0002\u0002\u0002\u0010j\u0003\u0002\u0002",
    "\u0002\u0012l\u0003\u0002\u0002\u0002\u0014p\u0003\u0002\u0002\u0002",
    "\u0016y\u0003\u0002\u0002\u0002\u0018|\u0003\u0002\u0002\u0002\u001a",
    "\u0088\u0003\u0002\u0002\u0002\u001c\u008c\u0003\u0002\u0002\u0002\u001e",
    "\u008e\u0003\u0002\u0002\u0002 \u0096\u0003\u0002\u0002\u0002\"\u0099",
    "\u0003\u0002\u0002\u0002$\u00a4\u0003\u0002\u0002\u0002&\u00a6\u0003",
    "\u0002\u0002\u0002(\u00cc\u0003\u0002\u0002\u0002*,\u0005\u0004\u0003",
    "\u0002+*\u0003\u0002\u0002\u0002,/\u0003\u0002\u0002\u0002-+\u0003\u0002",
    "\u0002\u0002-.\u0003\u0002\u0002\u0002.3\u0003\u0002\u0002\u0002/-\u0003",
    "\u0002\u0002\u000202\u0005\u0006\u0004\u000210\u0003\u0002\u0002\u0002",
    "25\u0003\u0002\u0002\u000231\u0003\u0002\u0002\u000234\u0003\u0002\u0002",
    "\u00024\u0003\u0003\u0002\u0002\u000253\u0003\u0002\u0002\u000267\u0005",
    "\u0018\r\u000278\u0005&\u0014\u000289\u0007\u0003\u0002\u00029:\u0005",
    "$\u0013\u0002:;\u0007\u0004\u0002\u0002;\u0005\u0003\u0002\u0002\u0002",
    "<=\u0005\u001c\u000f\u0002=?\u0007&\u0002\u0002>@\u0005\u001e\u0010",
    "\u0002?>\u0003\u0002\u0002\u0002?@\u0003\u0002\u0002\u0002@A\u0003\u0002",
    "\u0002\u0002AB\u0005\b\u0005\u0002B\u0007\u0003\u0002\u0002\u0002CI",
    "\u0007\u0005\u0002\u0002DE\u0005\u0016\f\u0002EF\u0007\u0004\u0002\u0002",
    "FH\u0003\u0002\u0002\u0002GD\u0003\u0002\u0002\u0002HK\u0003\u0002\u0002",
    "\u0002IG\u0003\u0002\u0002\u0002IJ\u0003\u0002\u0002\u0002JO\u0003\u0002",
    "\u0002\u0002KI\u0003\u0002\u0002\u0002LN\u0005\n\u0006\u0002ML\u0003",
    "\u0002\u0002\u0002NQ\u0003\u0002\u0002\u0002OM\u0003\u0002\u0002\u0002",
    "OP\u0003\u0002\u0002\u0002PR\u0003\u0002\u0002\u0002QO\u0003\u0002\u0002",
    "\u0002RS\u0007\u0006\u0002\u0002S\t\u0003\u0002\u0002\u0002TU\u0005",
    "(\u0015\u0002UV\u0007\u0004\u0002\u0002V[\u0003\u0002\u0002\u0002W[",
    "\u0005\u000e\b\u0002X[\u0005\u0012\n\u0002Y[\u0005\f\u0007\u0002ZT\u0003",
    "\u0002\u0002\u0002ZW\u0003\u0002\u0002\u0002ZX\u0003\u0002\u0002\u0002",
    "ZY\u0003\u0002\u0002\u0002[\u000b\u0003\u0002\u0002\u0002\\^\u0007\"",
    "\u0002\u0002]_\u0005$\u0013\u0002^]\u0003\u0002\u0002\u0002^_\u0003",
    "\u0002\u0002\u0002_\r\u0003\u0002\u0002\u0002`a\u0007 \u0002\u0002a",
    "b\u0005(\u0015\u0002bd\u0005\u0014\u000b\u0002ce\u0005\u0010\t\u0002",
    "dc\u0003\u0002\u0002\u0002de\u0003\u0002\u0002\u0002e\u000f\u0003\u0002",
    "\u0002\u0002fg\u0007!\u0002\u0002gk\u0005\u0014\u000b\u0002hi\u0007",
    "!\u0002\u0002ik\u0005\u000e\b\u0002jf\u0003\u0002\u0002\u0002jh\u0003",
    "\u0002\u0002\u0002k\u0011\u0003\u0002\u0002\u0002lm\u0007#\u0002\u0002",
    "mn\u0005(\u0015\u0002no\u0005\u0014\u000b\u0002o\u0013\u0003\u0002\u0002",
    "\u0002pt\u0007\u0005\u0002\u0002qs\u0005\n\u0006\u0002rq\u0003\u0002",
    "\u0002\u0002sv\u0003\u0002\u0002\u0002tr\u0003\u0002\u0002\u0002tu\u0003",
    "\u0002\u0002\u0002uw\u0003\u0002\u0002\u0002vt\u0003\u0002\u0002\u0002",
    "wx\u0007\u0006\u0002\u0002x\u0015\u0003\u0002\u0002\u0002yz\u0005\u0018",
    "\r\u0002z{\u0005&\u0014\u0002{\u0017\u0003\u0002\u0002\u0002|}\t\u0002",
    "\u0002\u0002}\u0019\u0003\u0002\u0002\u0002~\u007f\u0007\u001d\u0002",
    "\u0002\u007f\u0080\u0007\u0007\u0002\u0002\u0080\u0089\u0007\b\u0002",
    "\u0002\u0081\u0082\u0007\u001e\u0002\u0002\u0082\u0083\u0007\u0007\u0002",
    "\u0002\u0083\u0089\u0007\b\u0002\u0002\u0084\u0085\u0007\u001f\u0002",
    "\u0002\u0085\u0086\u0007\u0007\u0002\u0002\u0086\u0089\u0007\b\u0002",
    "\u0002\u0087\u0089\u0005\u0018\r\u0002\u0088~\u0003\u0002\u0002\u0002",
    "\u0088\u0081\u0003\u0002\u0002\u0002\u0088\u0084\u0003\u0002\u0002\u0002",
    "\u0088\u0087\u0003\u0002\u0002\u0002\u0089\u001b\u0003\u0002\u0002\u0002",
    "\u008a\u008d\u0005\u0018\r\u0002\u008b\u008d\u0007$\u0002\u0002\u008c",
    "\u008a\u0003\u0002\u0002\u0002\u008c\u008b\u0003\u0002\u0002\u0002\u008d",
    "\u001d\u0003\u0002\u0002\u0002\u008e\u0093\u0005 \u0011\u0002\u008f",
    "\u0090\u0007\t\u0002\u0002\u0090\u0092\u0005 \u0011\u0002\u0091\u008f",
    "\u0003\u0002\u0002\u0002\u0092\u0095\u0003\u0002\u0002\u0002\u0093\u0091",
    "\u0003\u0002\u0002\u0002\u0093\u0094\u0003\u0002\u0002\u0002\u0094\u001f",
    "\u0003\u0002\u0002\u0002\u0095\u0093\u0003\u0002\u0002\u0002\u0096\u0097",
    "\u0005\u001a\u000e\u0002\u0097\u0098\u0005&\u0014\u0002\u0098!\u0003",
    "\u0002\u0002\u0002\u0099\u009e\u0005(\u0015\u0002\u009a\u009b\u0007",
    "\t\u0002\u0002\u009b\u009d\u0005(\u0015\u0002\u009c\u009a\u0003\u0002",
    "\u0002\u0002\u009d\u00a0\u0003\u0002\u0002\u0002\u009e\u009c\u0003\u0002",
    "\u0002\u0002\u009e\u009f\u0003\u0002\u0002\u0002\u009f#\u0003\u0002",
    "\u0002\u0002\u00a0\u009e\u0003\u0002\u0002\u0002\u00a1\u00a5\u0005&",
    "\u0014\u0002\u00a2\u00a5\u0007(\u0002\u0002\u00a3\u00a5\u0007\'\u0002",
    "\u0002\u00a4\u00a1\u0003\u0002\u0002\u0002\u00a4\u00a2\u0003\u0002\u0002",
    "\u0002\u00a4\u00a3\u0003\u0002\u0002\u0002\u00a5%\u0003\u0002\u0002",
    "\u0002\u00a6\u00ac\u0007%\u0002\u0002\u00a7\u00a9\u0007\u0007\u0002",
    "\u0002\u00a8\u00aa\u0005(\u0015\u0002\u00a9\u00a8\u0003\u0002\u0002",
    "\u0002\u00a9\u00aa\u0003\u0002\u0002\u0002\u00aa\u00ab\u0003\u0002\u0002",
    "\u0002\u00ab\u00ad\u0007\b\u0002\u0002\u00ac\u00a7\u0003\u0002\u0002",
    "\u0002\u00ac\u00ad\u0003\u0002\u0002\u0002\u00ad\'\u0003\u0002\u0002",
    "\u0002\u00ae\u00af\b\u0015\u0001\u0002\u00af\u00b0\u0007\u000e\u0002",
    "\u0002\u00b0\u00cd\u0005(\u0015\u0013\u00b1\u00b2\u0005&\u0014\u0002",
    "\u00b2\u00b3\u0007\u0003\u0002\u0002\u00b3\u00b4\u0005(\u0015\u000f",
    "\u00b4\u00cd\u0003\u0002\u0002\u0002\u00b5\u00b6\u0007\u001b\u0002\u0002",
    "\u00b6\u00cd\u0005(\u0015\u0005\u00b7\u00b8\u0005&\u0014\u0002\u00b8",
    "\u00b9\u0007\r\u0002\u0002\u00b9\u00cd\u0003\u0002\u0002\u0002\u00ba",
    "\u00bb\u0007\r\u0002\u0002\u00bb\u00cd\u0005&\u0014\u0002\u00bc\u00bd",
    "\u0005&\u0014\u0002\u00bd\u00be\u0007\u000f\u0002\u0002\u00be\u00cd",
    "\u0003\u0002\u0002\u0002\u00bf\u00c0\u0007\u000f\u0002\u0002\u00c0\u00cd",
    "\u0005&\u0014\u0002\u00c1\u00c2\u0007\u0019\u0002\u0002\u00c2\u00c3",
    "\u0005(\u0015\u0002\u00c3\u00c4\u0007\u001a\u0002\u0002\u00c4\u00cd",
    "\u0003\u0002\u0002\u0002\u00c5\u00c6\u0007&\u0002\u0002\u00c6\u00c8",
    "\u0007\u0019\u0002\u0002\u00c7\u00c9\u0005\"\u0012\u0002\u00c8\u00c7",
    "\u0003\u0002\u0002\u0002\u00c8\u00c9\u0003\u0002\u0002\u0002\u00c9\u00ca",
    "\u0003\u0002\u0002\u0002\u00ca\u00cd\u0007\u001a\u0002\u0002\u00cb\u00cd",
    "\u0005$\u0013\u0002\u00cc\u00ae\u0003\u0002\u0002\u0002\u00cc\u00b1",
    "\u0003\u0002\u0002\u0002\u00cc\u00b5\u0003\u0002\u0002\u0002\u00cc\u00b7",
    "\u0003\u0002\u0002\u0002\u00cc\u00ba\u0003\u0002\u0002\u0002\u00cc\u00bc",
    "\u0003\u0002\u0002\u0002\u00cc\u00bf\u0003\u0002\u0002\u0002\u00cc\u00c1",
    "\u0003\u0002\u0002\u0002\u00cc\u00c5\u0003\u0002\u0002\u0002\u00cc\u00cb",
    "\u0003\u0002\u0002\u0002\u00cd\u00f7\u0003\u0002\u0002\u0002\u00ce\u00cf",
    "\f\u0019\u0002\u0002\u00cf\u00d0\u0007\n\u0002\u0002\u00d0\u00f6\u0005",
    "(\u0015\u001a\u00d1\u00d2\f\u0018\u0002\u0002\u00d2\u00d3\u0007\u000b",
    "\u0002\u0002\u00d3\u00f6\u0005(\u0015\u0019\u00d4\u00d5\f\u0017\u0002",
    "\u0002\u00d5\u00d6\u0007\f\u0002\u0002\u00d6\u00f6\u0005(\u0015\u0018",
    "\u00d7\u00d8\f\u0014\u0002\u0002\u00d8\u00d9\u0007\u000e\u0002\u0002",
    "\u00d9\u00f6\u0005(\u0015\u0015\u00da\u00db\f\u0010\u0002\u0002\u00db",
    "\u00dc\u0007\u0010\u0002\u0002\u00dc\u00f6\u0005(\u0015\u0011\u00dd",
    "\u00de\f\u000e\u0002\u0002\u00de\u00df\u0007\u0011\u0002\u0002\u00df",
    "\u00f6\u0005(\u0015\u000f\u00e0\u00e1\f\r\u0002\u0002\u00e1\u00e2\u0007",
    "\u0012\u0002\u0002\u00e2\u00f6\u0005(\u0015\u000e\u00e3\u00e4\f\f\u0002",
    "\u0002\u00e4\u00e5\u0007\u0013\u0002\u0002\u00e5\u00f6\u0005(\u0015",
    "\r\u00e6\u00e7\f\u000b\u0002\u0002\u00e7\u00e8\u0007\u0014\u0002\u0002",
    "\u00e8\u00f6\u0005(\u0015\f\u00e9\u00ea\f\n\u0002\u0002\u00ea\u00eb",
    "\u0007\u0015\u0002\u0002\u00eb\u00f6\u0005(\u0015\u000b\u00ec\u00ed",
    "\f\t\u0002\u0002\u00ed\u00ee\u0007\u0016\u0002\u0002\u00ee\u00f6\u0005",
    "(\u0015\n\u00ef\u00f0\f\b\u0002\u0002\u00f0\u00f1\u0007\u0017\u0002",
    "\u0002\u00f1\u00f6\u0005(\u0015\t\u00f2\u00f3\f\u0007\u0002\u0002\u00f3",
    "\u00f4\u0007\u0018\u0002\u0002\u00f4\u00f6\u0005(\u0015\b\u00f5\u00ce",
    "\u0003\u0002\u0002\u0002\u00f5\u00d1\u0003\u0002\u0002\u0002\u00f5\u00d4",
    "\u0003\u0002\u0002\u0002\u00f5\u00d7\u0003\u0002\u0002\u0002\u00f5\u00da",
    "\u0003\u0002\u0002\u0002\u00f5\u00dd\u0003\u0002\u0002\u0002\u00f5\u00e0",
    "\u0003\u0002\u0002\u0002\u00f5\u00e3\u0003\u0002\u0002\u0002\u00f5\u00e6",
    "\u0003\u0002\u0002\u0002\u00f5\u00e9\u0003\u0002\u0002\u0002\u00f5\u00ec",
    "\u0003\u0002\u0002\u0002\u00f5\u00ef\u0003\u0002\u0002\u0002\u00f5\u00f2",
    "\u0003\u0002\u0002\u0002\u00f6\u00f9\u0003\u0002\u0002\u0002\u00f7\u00f5",
    "\u0003\u0002\u0002\u0002\u00f7\u00f8\u0003\u0002\u0002\u0002\u00f8)",
    "\u0003\u0002\u0002\u0002\u00f9\u00f7\u0003\u0002\u0002\u0002\u0017-",
    "3?IOZ^djt\u0088\u008c\u0093\u009e\u00a4\u00a9\u00ac\u00c8\u00cc\u00f5",
    "\u00f7"].join("");


var atn = new antlr4.atn.ATNDeserializer().deserialize(serializedATN);

var decisionsToDFA = atn.decisionToState.map( function(ds, index) { return new antlr4.dfa.DFA(ds, index); });

var sharedContextCache = new antlr4.PredictionContextCache();

var literalNames = [ 'null', "'='", "';'", "'{'", "'}'", "'['", "']'", "','", 
                     "'*'", "'/'", "'+'", "'++'", "'-'", "'--'", "'%'", 
                     "'=='", "'!='", "'>'", "'>='", "'<'", "'<='", "'||'", 
                     "'&&'", "'('", "')'", "'!'", 'null', "'char'", "'int32_t'", 
                     "'int64_t'", "'if'", "'else'", "'return'", "'while'", 
                     "'void'" ];

var symbolicNames = [ 'null', 'null', 'null', 'null', 'null', 'null', 'null', 
                      'null', 'null', 'null', 'null', 'null', 'null', 'null', 
                      'null', 'null', 'null', 'null', 'null', 'null', 'null', 
                      'null', 'null', 'null', 'null', 'null', "WS", "CHAR", 
                      "INT32_T", "INT64_T", "IF", "ELSE", "RETURN", "WHILE", 
                      "VOID", "NAME", "FUNCTION_NAME", "CHARACTER", "NUMBER" ];

var ruleNames =  [ "program", "globalVar", "function", "blockFunction", 
                   "instruction", "returnStatement", "ifStatement", "elseStatement", 
                   "whileStatement", "block", "declare", "type", "sigType", 
                   "retType", "sigParams", "sigDeclare", "params", "val", 
                   "name", "expr" ];

function ProgParser (input) {
	antlr4.Parser.call(this, input);
    this._interp = new antlr4.atn.ParserATNSimulator(this, atn, decisionsToDFA, sharedContextCache);
    this.ruleNames = ruleNames;
    this.literalNames = literalNames;
    this.symbolicNames = symbolicNames;
    return this;
}

ProgParser.prototype = Object.create(antlr4.Parser.prototype);
ProgParser.prototype.constructor = ProgParser;

Object.defineProperty(ProgParser.prototype, "atn", {
	get : function() {
		return atn;
	}
});

ProgParser.EOF = antlr4.Token.EOF;
ProgParser.T__0 = 1;
ProgParser.T__1 = 2;
ProgParser.T__2 = 3;
ProgParser.T__3 = 4;
ProgParser.T__4 = 5;
ProgParser.T__5 = 6;
ProgParser.T__6 = 7;
ProgParser.T__7 = 8;
ProgParser.T__8 = 9;
ProgParser.T__9 = 10;
ProgParser.T__10 = 11;
ProgParser.T__11 = 12;
ProgParser.T__12 = 13;
ProgParser.T__13 = 14;
ProgParser.T__14 = 15;
ProgParser.T__15 = 16;
ProgParser.T__16 = 17;
ProgParser.T__17 = 18;
ProgParser.T__18 = 19;
ProgParser.T__19 = 20;
ProgParser.T__20 = 21;
ProgParser.T__21 = 22;
ProgParser.T__22 = 23;
ProgParser.T__23 = 24;
ProgParser.T__24 = 25;
ProgParser.WS = 26;
ProgParser.CHAR = 27;
ProgParser.INT32_T = 28;
ProgParser.INT64_T = 29;
ProgParser.IF = 30;
ProgParser.ELSE = 31;
ProgParser.RETURN = 32;
ProgParser.WHILE = 33;
ProgParser.VOID = 34;
ProgParser.NAME = 35;
ProgParser.FUNCTION_NAME = 36;
ProgParser.CHARACTER = 37;
ProgParser.NUMBER = 38;

ProgParser.RULE_program = 0;
ProgParser.RULE_globalVar = 1;
ProgParser.RULE_function = 2;
ProgParser.RULE_blockFunction = 3;
ProgParser.RULE_instruction = 4;
ProgParser.RULE_returnStatement = 5;
ProgParser.RULE_ifStatement = 6;
ProgParser.RULE_elseStatement = 7;
ProgParser.RULE_whileStatement = 8;
ProgParser.RULE_block = 9;
ProgParser.RULE_declare = 10;
ProgParser.RULE_type = 11;
ProgParser.RULE_sigType = 12;
ProgParser.RULE_retType = 13;
ProgParser.RULE_sigParams = 14;
ProgParser.RULE_sigDeclare = 15;
ProgParser.RULE_params = 16;
ProgParser.RULE_val = 17;
ProgParser.RULE_name = 18;
ProgParser.RULE_expr = 19;

function ProgramContext(parser, parent, invokingState) {
	if(parent===undefined) {
	    parent = null;
	}
	if(invokingState===undefined || invokingState===null) {
		invokingState = -1;
	}
	antlr4.ParserRuleContext.call(this, parent, invokingState);
    this.parser = parser;
    this.ruleIndex = ProgParser.RULE_program;
    return this;
}

ProgramContext.prototype = Object.create(antlr4.ParserRuleContext.prototype);
ProgramContext.prototype.constructor = ProgramContext;

ProgramContext.prototype.globalVar = function(i) {
    if(i===undefined) {
        i = null;
    }
    if(i===null) {
        return this.getTypedRuleContexts(GlobalVarContext);
    } else {
        return this.getTypedRuleContext(GlobalVarContext,i);
    }
};

ProgramContext.prototype.function = function(i) {
    if(i===undefined) {
        i = null;
    }
    if(i===null) {
        return this.getTypedRuleContexts(FunctionContext);
    } else {
        return this.getTypedRuleContext(FunctionContext,i);
    }
};

ProgramContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitProgram(this);
    } else {
        return visitor.visitChildren(this);
    }
};




ProgParser.ProgramContext = ProgramContext;

ProgParser.prototype.program = function() {

    var localctx = new ProgramContext(this, this._ctx, this.state);
    this.enterRule(localctx, 0, ProgParser.RULE_program);
    var _la = 0; // Token type
    try {
        this.enterOuterAlt(localctx, 1);
        this.state = 43;
        this._errHandler.sync(this);
        var _alt = this._interp.adaptivePredict(this._input,0,this._ctx)
        while(_alt!=2 && _alt!=antlr4.atn.ATN.INVALID_ALT_NUMBER) {
            if(_alt===1) {
                this.state = 40;
                this.globalVar(); 
            }
            this.state = 45;
            this._errHandler.sync(this);
            _alt = this._interp.adaptivePredict(this._input,0,this._ctx);
        }

        this.state = 49;
        this._errHandler.sync(this);
        _la = this._input.LA(1);
        while(((((_la - 27)) & ~0x1f) == 0 && ((1 << (_la - 27)) & ((1 << (ProgParser.CHAR - 27)) | (1 << (ProgParser.INT32_T - 27)) | (1 << (ProgParser.INT64_T - 27)) | (1 << (ProgParser.VOID - 27)))) !== 0)) {
            this.state = 46;
            this.function();
            this.state = 51;
            this._errHandler.sync(this);
            _la = this._input.LA(1);
        }
    } catch (re) {
    	if(re instanceof antlr4.error.RecognitionException) {
	        localctx.exception = re;
	        this._errHandler.reportError(this, re);
	        this._errHandler.recover(this, re);
	    } else {
	    	throw re;
	    }
    } finally {
        this.exitRule();
    }
    return localctx;
};

function GlobalVarContext(parser, parent, invokingState) {
	if(parent===undefined) {
	    parent = null;
	}
	if(invokingState===undefined || invokingState===null) {
		invokingState = -1;
	}
	antlr4.ParserRuleContext.call(this, parent, invokingState);
    this.parser = parser;
    this.ruleIndex = ProgParser.RULE_globalVar;
    return this;
}

GlobalVarContext.prototype = Object.create(antlr4.ParserRuleContext.prototype);
GlobalVarContext.prototype.constructor = GlobalVarContext;

GlobalVarContext.prototype.type = function() {
    return this.getTypedRuleContext(TypeContext,0);
};

GlobalVarContext.prototype.name = function() {
    return this.getTypedRuleContext(NameContext,0);
};

GlobalVarContext.prototype.val = function() {
    return this.getTypedRuleContext(ValContext,0);
};

GlobalVarContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitGlobalVar(this);
    } else {
        return visitor.visitChildren(this);
    }
};




ProgParser.GlobalVarContext = GlobalVarContext;

ProgParser.prototype.globalVar = function() {

    var localctx = new GlobalVarContext(this, this._ctx, this.state);
    this.enterRule(localctx, 2, ProgParser.RULE_globalVar);
    try {
        this.enterOuterAlt(localctx, 1);
        this.state = 52;
        this.type();
        this.state = 53;
        this.name();
        this.state = 54;
        this.match(ProgParser.T__0);
        this.state = 55;
        this.val();
        this.state = 56;
        this.match(ProgParser.T__1);
    } catch (re) {
    	if(re instanceof antlr4.error.RecognitionException) {
	        localctx.exception = re;
	        this._errHandler.reportError(this, re);
	        this._errHandler.recover(this, re);
	    } else {
	    	throw re;
	    }
    } finally {
        this.exitRule();
    }
    return localctx;
};

function FunctionContext(parser, parent, invokingState) {
	if(parent===undefined) {
	    parent = null;
	}
	if(invokingState===undefined || invokingState===null) {
		invokingState = -1;
	}
	antlr4.ParserRuleContext.call(this, parent, invokingState);
    this.parser = parser;
    this.ruleIndex = ProgParser.RULE_function;
    return this;
}

FunctionContext.prototype = Object.create(antlr4.ParserRuleContext.prototype);
FunctionContext.prototype.constructor = FunctionContext;

FunctionContext.prototype.retType = function() {
    return this.getTypedRuleContext(RetTypeContext,0);
};

FunctionContext.prototype.FUNCTION_NAME = function() {
    return this.getToken(ProgParser.FUNCTION_NAME, 0);
};

FunctionContext.prototype.blockFunction = function() {
    return this.getTypedRuleContext(BlockFunctionContext,0);
};

FunctionContext.prototype.sigParams = function() {
    return this.getTypedRuleContext(SigParamsContext,0);
};

FunctionContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitFunction(this);
    } else {
        return visitor.visitChildren(this);
    }
};




ProgParser.FunctionContext = FunctionContext;

ProgParser.prototype.function = function() {

    var localctx = new FunctionContext(this, this._ctx, this.state);
    this.enterRule(localctx, 4, ProgParser.RULE_function);
    var _la = 0; // Token type
    try {
        this.enterOuterAlt(localctx, 1);
        this.state = 58;
        this.retType();
        this.state = 59;
        this.match(ProgParser.FUNCTION_NAME);

        this.state = 61;
        _la = this._input.LA(1);
        if((((_la) & ~0x1f) == 0 && ((1 << _la) & ((1 << ProgParser.CHAR) | (1 << ProgParser.INT32_T) | (1 << ProgParser.INT64_T))) !== 0)) {
            this.state = 60;
            this.sigParams();
        }

        this.state = 63;
        this.blockFunction();
    } catch (re) {
    	if(re instanceof antlr4.error.RecognitionException) {
	        localctx.exception = re;
	        this._errHandler.reportError(this, re);
	        this._errHandler.recover(this, re);
	    } else {
	    	throw re;
	    }
    } finally {
        this.exitRule();
    }
    return localctx;
};

function BlockFunctionContext(parser, parent, invokingState) {
	if(parent===undefined) {
	    parent = null;
	}
	if(invokingState===undefined || invokingState===null) {
		invokingState = -1;
	}
	antlr4.ParserRuleContext.call(this, parent, invokingState);
    this.parser = parser;
    this.ruleIndex = ProgParser.RULE_blockFunction;
    return this;
}

BlockFunctionContext.prototype = Object.create(antlr4.ParserRuleContext.prototype);
BlockFunctionContext.prototype.constructor = BlockFunctionContext;

BlockFunctionContext.prototype.declare = function(i) {
    if(i===undefined) {
        i = null;
    }
    if(i===null) {
        return this.getTypedRuleContexts(DeclareContext);
    } else {
        return this.getTypedRuleContext(DeclareContext,i);
    }
};

BlockFunctionContext.prototype.instruction = function(i) {
    if(i===undefined) {
        i = null;
    }
    if(i===null) {
        return this.getTypedRuleContexts(InstructionContext);
    } else {
        return this.getTypedRuleContext(InstructionContext,i);
    }
};

BlockFunctionContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitBlockFunction(this);
    } else {
        return visitor.visitChildren(this);
    }
};




ProgParser.BlockFunctionContext = BlockFunctionContext;

ProgParser.prototype.blockFunction = function() {

    var localctx = new BlockFunctionContext(this, this._ctx, this.state);
    this.enterRule(localctx, 6, ProgParser.RULE_blockFunction);
    var _la = 0; // Token type
    try {
        this.enterOuterAlt(localctx, 1);
        this.state = 65;
        this.match(ProgParser.T__2);
        this.state = 71;
        this._errHandler.sync(this);
        _la = this._input.LA(1);
        while((((_la) & ~0x1f) == 0 && ((1 << _la) & ((1 << ProgParser.CHAR) | (1 << ProgParser.INT32_T) | (1 << ProgParser.INT64_T))) !== 0)) {
            this.state = 66;
            this.declare();
            this.state = 67;
            this.match(ProgParser.T__1);
            this.state = 73;
            this._errHandler.sync(this);
            _la = this._input.LA(1);
        }
        this.state = 77;
        this._errHandler.sync(this);
        _la = this._input.LA(1);
        while(((((_la - 11)) & ~0x1f) == 0 && ((1 << (_la - 11)) & ((1 << (ProgParser.T__10 - 11)) | (1 << (ProgParser.T__11 - 11)) | (1 << (ProgParser.T__12 - 11)) | (1 << (ProgParser.T__22 - 11)) | (1 << (ProgParser.T__24 - 11)) | (1 << (ProgParser.IF - 11)) | (1 << (ProgParser.RETURN - 11)) | (1 << (ProgParser.WHILE - 11)) | (1 << (ProgParser.NAME - 11)) | (1 << (ProgParser.FUNCTION_NAME - 11)) | (1 << (ProgParser.CHARACTER - 11)) | (1 << (ProgParser.NUMBER - 11)))) !== 0)) {
            this.state = 74;
            this.instruction();
            this.state = 79;
            this._errHandler.sync(this);
            _la = this._input.LA(1);
        }
        this.state = 80;
        this.match(ProgParser.T__3);
    } catch (re) {
    	if(re instanceof antlr4.error.RecognitionException) {
	        localctx.exception = re;
	        this._errHandler.reportError(this, re);
	        this._errHandler.recover(this, re);
	    } else {
	    	throw re;
	    }
    } finally {
        this.exitRule();
    }
    return localctx;
};

function InstructionContext(parser, parent, invokingState) {
	if(parent===undefined) {
	    parent = null;
	}
	if(invokingState===undefined || invokingState===null) {
		invokingState = -1;
	}
	antlr4.ParserRuleContext.call(this, parent, invokingState);
    this.parser = parser;
    this.ruleIndex = ProgParser.RULE_instruction;
    return this;
}

InstructionContext.prototype = Object.create(antlr4.ParserRuleContext.prototype);
InstructionContext.prototype.constructor = InstructionContext;

InstructionContext.prototype.expr = function() {
    return this.getTypedRuleContext(ExprContext,0);
};

InstructionContext.prototype.ifStatement = function() {
    return this.getTypedRuleContext(IfStatementContext,0);
};

InstructionContext.prototype.whileStatement = function() {
    return this.getTypedRuleContext(WhileStatementContext,0);
};

InstructionContext.prototype.returnStatement = function() {
    return this.getTypedRuleContext(ReturnStatementContext,0);
};

InstructionContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitInstruction(this);
    } else {
        return visitor.visitChildren(this);
    }
};




ProgParser.InstructionContext = InstructionContext;

ProgParser.prototype.instruction = function() {

    var localctx = new InstructionContext(this, this._ctx, this.state);
    this.enterRule(localctx, 8, ProgParser.RULE_instruction);
    try {
        this.state = 88;
        switch(this._input.LA(1)) {
        case ProgParser.T__10:
        case ProgParser.T__11:
        case ProgParser.T__12:
        case ProgParser.T__22:
        case ProgParser.T__24:
        case ProgParser.NAME:
        case ProgParser.FUNCTION_NAME:
        case ProgParser.CHARACTER:
        case ProgParser.NUMBER:
            this.enterOuterAlt(localctx, 1);
            this.state = 82;
            this.expr(0);
            this.state = 83;
            this.match(ProgParser.T__1);
            break;
        case ProgParser.IF:
            this.enterOuterAlt(localctx, 2);
            this.state = 85;
            this.ifStatement();
            break;
        case ProgParser.WHILE:
            this.enterOuterAlt(localctx, 3);
            this.state = 86;
            this.whileStatement();
            break;
        case ProgParser.RETURN:
            this.enterOuterAlt(localctx, 4);
            this.state = 87;
            this.returnStatement();
            break;
        default:
            throw new antlr4.error.NoViableAltException(this);
        }
    } catch (re) {
    	if(re instanceof antlr4.error.RecognitionException) {
	        localctx.exception = re;
	        this._errHandler.reportError(this, re);
	        this._errHandler.recover(this, re);
	    } else {
	    	throw re;
	    }
    } finally {
        this.exitRule();
    }
    return localctx;
};

function ReturnStatementContext(parser, parent, invokingState) {
	if(parent===undefined) {
	    parent = null;
	}
	if(invokingState===undefined || invokingState===null) {
		invokingState = -1;
	}
	antlr4.ParserRuleContext.call(this, parent, invokingState);
    this.parser = parser;
    this.ruleIndex = ProgParser.RULE_returnStatement;
    return this;
}

ReturnStatementContext.prototype = Object.create(antlr4.ParserRuleContext.prototype);
ReturnStatementContext.prototype.constructor = ReturnStatementContext;

ReturnStatementContext.prototype.RETURN = function() {
    return this.getToken(ProgParser.RETURN, 0);
};

ReturnStatementContext.prototype.val = function() {
    return this.getTypedRuleContext(ValContext,0);
};

ReturnStatementContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitReturnStatement(this);
    } else {
        return visitor.visitChildren(this);
    }
};




ProgParser.ReturnStatementContext = ReturnStatementContext;

ProgParser.prototype.returnStatement = function() {

    var localctx = new ReturnStatementContext(this, this._ctx, this.state);
    this.enterRule(localctx, 10, ProgParser.RULE_returnStatement);
    try {
        this.enterOuterAlt(localctx, 1);
        this.state = 90;
        this.match(ProgParser.RETURN);
        this.state = 92;
        var la_ = this._interp.adaptivePredict(this._input,6,this._ctx);
        if(la_===1) {
            this.state = 91;
            this.val();

        }
    } catch (re) {
    	if(re instanceof antlr4.error.RecognitionException) {
	        localctx.exception = re;
	        this._errHandler.reportError(this, re);
	        this._errHandler.recover(this, re);
	    } else {
	    	throw re;
	    }
    } finally {
        this.exitRule();
    }
    return localctx;
};

function IfStatementContext(parser, parent, invokingState) {
	if(parent===undefined) {
	    parent = null;
	}
	if(invokingState===undefined || invokingState===null) {
		invokingState = -1;
	}
	antlr4.ParserRuleContext.call(this, parent, invokingState);
    this.parser = parser;
    this.ruleIndex = ProgParser.RULE_ifStatement;
    return this;
}

IfStatementContext.prototype = Object.create(antlr4.ParserRuleContext.prototype);
IfStatementContext.prototype.constructor = IfStatementContext;

IfStatementContext.prototype.IF = function() {
    return this.getToken(ProgParser.IF, 0);
};

IfStatementContext.prototype.block = function() {
    return this.getTypedRuleContext(BlockContext,0);
};

IfStatementContext.prototype.expr = function() {
    return this.getTypedRuleContext(ExprContext,0);
};

IfStatementContext.prototype.elseStatement = function() {
    return this.getTypedRuleContext(ElseStatementContext,0);
};

IfStatementContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitIfStatement(this);
    } else {
        return visitor.visitChildren(this);
    }
};




ProgParser.IfStatementContext = IfStatementContext;

ProgParser.prototype.ifStatement = function() {

    var localctx = new IfStatementContext(this, this._ctx, this.state);
    this.enterRule(localctx, 12, ProgParser.RULE_ifStatement);
    var _la = 0; // Token type
    try {
        this.enterOuterAlt(localctx, 1);
        this.state = 94;
        this.match(ProgParser.IF);

        this.state = 95;
        this.expr(0);
        this.state = 96;
        this.block();
        this.state = 98;
        _la = this._input.LA(1);
        if(_la===ProgParser.ELSE) {
            this.state = 97;
            this.elseStatement();
        }

    } catch (re) {
    	if(re instanceof antlr4.error.RecognitionException) {
	        localctx.exception = re;
	        this._errHandler.reportError(this, re);
	        this._errHandler.recover(this, re);
	    } else {
	    	throw re;
	    }
    } finally {
        this.exitRule();
    }
    return localctx;
};

function ElseStatementContext(parser, parent, invokingState) {
	if(parent===undefined) {
	    parent = null;
	}
	if(invokingState===undefined || invokingState===null) {
		invokingState = -1;
	}
	antlr4.ParserRuleContext.call(this, parent, invokingState);
    this.parser = parser;
    this.ruleIndex = ProgParser.RULE_elseStatement;
    return this;
}

ElseStatementContext.prototype = Object.create(antlr4.ParserRuleContext.prototype);
ElseStatementContext.prototype.constructor = ElseStatementContext;

ElseStatementContext.prototype.ELSE = function() {
    return this.getToken(ProgParser.ELSE, 0);
};

ElseStatementContext.prototype.block = function() {
    return this.getTypedRuleContext(BlockContext,0);
};

ElseStatementContext.prototype.ifStatement = function() {
    return this.getTypedRuleContext(IfStatementContext,0);
};

ElseStatementContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitElseStatement(this);
    } else {
        return visitor.visitChildren(this);
    }
};




ProgParser.ElseStatementContext = ElseStatementContext;

ProgParser.prototype.elseStatement = function() {

    var localctx = new ElseStatementContext(this, this._ctx, this.state);
    this.enterRule(localctx, 14, ProgParser.RULE_elseStatement);
    try {
        this.state = 104;
        var la_ = this._interp.adaptivePredict(this._input,8,this._ctx);
        switch(la_) {
        case 1:
            this.enterOuterAlt(localctx, 1);
            this.state = 100;
            this.match(ProgParser.ELSE);
            this.state = 101;
            this.block();
            break;

        case 2:
            this.enterOuterAlt(localctx, 2);
            this.state = 102;
            this.match(ProgParser.ELSE);
            this.state = 103;
            this.ifStatement();
            break;

        }
    } catch (re) {
    	if(re instanceof antlr4.error.RecognitionException) {
	        localctx.exception = re;
	        this._errHandler.reportError(this, re);
	        this._errHandler.recover(this, re);
	    } else {
	    	throw re;
	    }
    } finally {
        this.exitRule();
    }
    return localctx;
};

function WhileStatementContext(parser, parent, invokingState) {
	if(parent===undefined) {
	    parent = null;
	}
	if(invokingState===undefined || invokingState===null) {
		invokingState = -1;
	}
	antlr4.ParserRuleContext.call(this, parent, invokingState);
    this.parser = parser;
    this.ruleIndex = ProgParser.RULE_whileStatement;
    return this;
}

WhileStatementContext.prototype = Object.create(antlr4.ParserRuleContext.prototype);
WhileStatementContext.prototype.constructor = WhileStatementContext;

WhileStatementContext.prototype.WHILE = function() {
    return this.getToken(ProgParser.WHILE, 0);
};

WhileStatementContext.prototype.block = function() {
    return this.getTypedRuleContext(BlockContext,0);
};

WhileStatementContext.prototype.expr = function() {
    return this.getTypedRuleContext(ExprContext,0);
};

WhileStatementContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitWhileStatement(this);
    } else {
        return visitor.visitChildren(this);
    }
};




ProgParser.WhileStatementContext = WhileStatementContext;

ProgParser.prototype.whileStatement = function() {

    var localctx = new WhileStatementContext(this, this._ctx, this.state);
    this.enterRule(localctx, 16, ProgParser.RULE_whileStatement);
    try {
        this.enterOuterAlt(localctx, 1);
        this.state = 106;
        this.match(ProgParser.WHILE);

        this.state = 107;
        this.expr(0);
        this.state = 108;
        this.block();
    } catch (re) {
    	if(re instanceof antlr4.error.RecognitionException) {
	        localctx.exception = re;
	        this._errHandler.reportError(this, re);
	        this._errHandler.recover(this, re);
	    } else {
	    	throw re;
	    }
    } finally {
        this.exitRule();
    }
    return localctx;
};

function BlockContext(parser, parent, invokingState) {
	if(parent===undefined) {
	    parent = null;
	}
	if(invokingState===undefined || invokingState===null) {
		invokingState = -1;
	}
	antlr4.ParserRuleContext.call(this, parent, invokingState);
    this.parser = parser;
    this.ruleIndex = ProgParser.RULE_block;
    return this;
}

BlockContext.prototype = Object.create(antlr4.ParserRuleContext.prototype);
BlockContext.prototype.constructor = BlockContext;

BlockContext.prototype.instruction = function(i) {
    if(i===undefined) {
        i = null;
    }
    if(i===null) {
        return this.getTypedRuleContexts(InstructionContext);
    } else {
        return this.getTypedRuleContext(InstructionContext,i);
    }
};

BlockContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitBlock(this);
    } else {
        return visitor.visitChildren(this);
    }
};




ProgParser.BlockContext = BlockContext;

ProgParser.prototype.block = function() {

    var localctx = new BlockContext(this, this._ctx, this.state);
    this.enterRule(localctx, 18, ProgParser.RULE_block);
    var _la = 0; // Token type
    try {
        this.enterOuterAlt(localctx, 1);
        this.state = 110;
        this.match(ProgParser.T__2);
        this.state = 114;
        this._errHandler.sync(this);
        _la = this._input.LA(1);
        while(((((_la - 11)) & ~0x1f) == 0 && ((1 << (_la - 11)) & ((1 << (ProgParser.T__10 - 11)) | (1 << (ProgParser.T__11 - 11)) | (1 << (ProgParser.T__12 - 11)) | (1 << (ProgParser.T__22 - 11)) | (1 << (ProgParser.T__24 - 11)) | (1 << (ProgParser.IF - 11)) | (1 << (ProgParser.RETURN - 11)) | (1 << (ProgParser.WHILE - 11)) | (1 << (ProgParser.NAME - 11)) | (1 << (ProgParser.FUNCTION_NAME - 11)) | (1 << (ProgParser.CHARACTER - 11)) | (1 << (ProgParser.NUMBER - 11)))) !== 0)) {
            this.state = 111;
            this.instruction();
            this.state = 116;
            this._errHandler.sync(this);
            _la = this._input.LA(1);
        }
        this.state = 117;
        this.match(ProgParser.T__3);
    } catch (re) {
    	if(re instanceof antlr4.error.RecognitionException) {
	        localctx.exception = re;
	        this._errHandler.reportError(this, re);
	        this._errHandler.recover(this, re);
	    } else {
	    	throw re;
	    }
    } finally {
        this.exitRule();
    }
    return localctx;
};

function DeclareContext(parser, parent, invokingState) {
	if(parent===undefined) {
	    parent = null;
	}
	if(invokingState===undefined || invokingState===null) {
		invokingState = -1;
	}
	antlr4.ParserRuleContext.call(this, parent, invokingState);
    this.parser = parser;
    this.ruleIndex = ProgParser.RULE_declare;
    return this;
}

DeclareContext.prototype = Object.create(antlr4.ParserRuleContext.prototype);
DeclareContext.prototype.constructor = DeclareContext;

DeclareContext.prototype.type = function() {
    return this.getTypedRuleContext(TypeContext,0);
};

DeclareContext.prototype.name = function() {
    return this.getTypedRuleContext(NameContext,0);
};

DeclareContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitDeclare(this);
    } else {
        return visitor.visitChildren(this);
    }
};




ProgParser.DeclareContext = DeclareContext;

ProgParser.prototype.declare = function() {

    var localctx = new DeclareContext(this, this._ctx, this.state);
    this.enterRule(localctx, 20, ProgParser.RULE_declare);
    try {
        this.enterOuterAlt(localctx, 1);
        this.state = 119;
        this.type();
        this.state = 120;
        this.name();
    } catch (re) {
    	if(re instanceof antlr4.error.RecognitionException) {
	        localctx.exception = re;
	        this._errHandler.reportError(this, re);
	        this._errHandler.recover(this, re);
	    } else {
	    	throw re;
	    }
    } finally {
        this.exitRule();
    }
    return localctx;
};

function TypeContext(parser, parent, invokingState) {
	if(parent===undefined) {
	    parent = null;
	}
	if(invokingState===undefined || invokingState===null) {
		invokingState = -1;
	}
	antlr4.ParserRuleContext.call(this, parent, invokingState);
    this.parser = parser;
    this.ruleIndex = ProgParser.RULE_type;
    return this;
}

TypeContext.prototype = Object.create(antlr4.ParserRuleContext.prototype);
TypeContext.prototype.constructor = TypeContext;

TypeContext.prototype.CHAR = function() {
    return this.getToken(ProgParser.CHAR, 0);
};

TypeContext.prototype.INT32_T = function() {
    return this.getToken(ProgParser.INT32_T, 0);
};

TypeContext.prototype.INT64_T = function() {
    return this.getToken(ProgParser.INT64_T, 0);
};

TypeContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitType(this);
    } else {
        return visitor.visitChildren(this);
    }
};




ProgParser.TypeContext = TypeContext;

ProgParser.prototype.type = function() {

    var localctx = new TypeContext(this, this._ctx, this.state);
    this.enterRule(localctx, 22, ProgParser.RULE_type);
    var _la = 0; // Token type
    try {
        this.enterOuterAlt(localctx, 1);
        this.state = 122;
        _la = this._input.LA(1);
        if(!((((_la) & ~0x1f) == 0 && ((1 << _la) & ((1 << ProgParser.CHAR) | (1 << ProgParser.INT32_T) | (1 << ProgParser.INT64_T))) !== 0))) {
        this._errHandler.recoverInline(this);
        }
        else {
            this.consume();
        }
    } catch (re) {
    	if(re instanceof antlr4.error.RecognitionException) {
	        localctx.exception = re;
	        this._errHandler.reportError(this, re);
	        this._errHandler.recover(this, re);
	    } else {
	    	throw re;
	    }
    } finally {
        this.exitRule();
    }
    return localctx;
};

function SigTypeContext(parser, parent, invokingState) {
	if(parent===undefined) {
	    parent = null;
	}
	if(invokingState===undefined || invokingState===null) {
		invokingState = -1;
	}
	antlr4.ParserRuleContext.call(this, parent, invokingState);
    this.parser = parser;
    this.ruleIndex = ProgParser.RULE_sigType;
    return this;
}

SigTypeContext.prototype = Object.create(antlr4.ParserRuleContext.prototype);
SigTypeContext.prototype.constructor = SigTypeContext;

SigTypeContext.prototype.CHAR = function() {
    return this.getToken(ProgParser.CHAR, 0);
};

SigTypeContext.prototype.INT32_T = function() {
    return this.getToken(ProgParser.INT32_T, 0);
};

SigTypeContext.prototype.INT64_T = function() {
    return this.getToken(ProgParser.INT64_T, 0);
};

SigTypeContext.prototype.type = function() {
    return this.getTypedRuleContext(TypeContext,0);
};

SigTypeContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitSigType(this);
    } else {
        return visitor.visitChildren(this);
    }
};




ProgParser.SigTypeContext = SigTypeContext;

ProgParser.prototype.sigType = function() {

    var localctx = new SigTypeContext(this, this._ctx, this.state);
    this.enterRule(localctx, 24, ProgParser.RULE_sigType);
    try {
        this.state = 134;
        var la_ = this._interp.adaptivePredict(this._input,10,this._ctx);
        switch(la_) {
        case 1:
            this.enterOuterAlt(localctx, 1);
            this.state = 124;
            this.match(ProgParser.CHAR);
            this.state = 125;
            this.match(ProgParser.T__4);
            this.state = 126;
            this.match(ProgParser.T__5);
            break;

        case 2:
            this.enterOuterAlt(localctx, 2);
            this.state = 127;
            this.match(ProgParser.INT32_T);
            this.state = 128;
            this.match(ProgParser.T__4);
            this.state = 129;
            this.match(ProgParser.T__5);
            break;

        case 3:
            this.enterOuterAlt(localctx, 3);
            this.state = 130;
            this.match(ProgParser.INT64_T);
            this.state = 131;
            this.match(ProgParser.T__4);
            this.state = 132;
            this.match(ProgParser.T__5);
            break;

        case 4:
            this.enterOuterAlt(localctx, 4);
            this.state = 133;
            this.type();
            break;

        }
    } catch (re) {
    	if(re instanceof antlr4.error.RecognitionException) {
	        localctx.exception = re;
	        this._errHandler.reportError(this, re);
	        this._errHandler.recover(this, re);
	    } else {
	    	throw re;
	    }
    } finally {
        this.exitRule();
    }
    return localctx;
};

function RetTypeContext(parser, parent, invokingState) {
	if(parent===undefined) {
	    parent = null;
	}
	if(invokingState===undefined || invokingState===null) {
		invokingState = -1;
	}
	antlr4.ParserRuleContext.call(this, parent, invokingState);
    this.parser = parser;
    this.ruleIndex = ProgParser.RULE_retType;
    return this;
}

RetTypeContext.prototype = Object.create(antlr4.ParserRuleContext.prototype);
RetTypeContext.prototype.constructor = RetTypeContext;

RetTypeContext.prototype.type = function() {
    return this.getTypedRuleContext(TypeContext,0);
};

RetTypeContext.prototype.VOID = function() {
    return this.getToken(ProgParser.VOID, 0);
};

RetTypeContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitRetType(this);
    } else {
        return visitor.visitChildren(this);
    }
};




ProgParser.RetTypeContext = RetTypeContext;

ProgParser.prototype.retType = function() {

    var localctx = new RetTypeContext(this, this._ctx, this.state);
    this.enterRule(localctx, 26, ProgParser.RULE_retType);
    try {
        this.state = 138;
        switch(this._input.LA(1)) {
        case ProgParser.CHAR:
        case ProgParser.INT32_T:
        case ProgParser.INT64_T:
            this.enterOuterAlt(localctx, 1);
            this.state = 136;
            this.type();
            break;
        case ProgParser.VOID:
            this.enterOuterAlt(localctx, 2);
            this.state = 137;
            this.match(ProgParser.VOID);
            break;
        default:
            throw new antlr4.error.NoViableAltException(this);
        }
    } catch (re) {
    	if(re instanceof antlr4.error.RecognitionException) {
	        localctx.exception = re;
	        this._errHandler.reportError(this, re);
	        this._errHandler.recover(this, re);
	    } else {
	    	throw re;
	    }
    } finally {
        this.exitRule();
    }
    return localctx;
};

function SigParamsContext(parser, parent, invokingState) {
	if(parent===undefined) {
	    parent = null;
	}
	if(invokingState===undefined || invokingState===null) {
		invokingState = -1;
	}
	antlr4.ParserRuleContext.call(this, parent, invokingState);
    this.parser = parser;
    this.ruleIndex = ProgParser.RULE_sigParams;
    return this;
}

SigParamsContext.prototype = Object.create(antlr4.ParserRuleContext.prototype);
SigParamsContext.prototype.constructor = SigParamsContext;

SigParamsContext.prototype.sigDeclare = function(i) {
    if(i===undefined) {
        i = null;
    }
    if(i===null) {
        return this.getTypedRuleContexts(SigDeclareContext);
    } else {
        return this.getTypedRuleContext(SigDeclareContext,i);
    }
};

SigParamsContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitSigParams(this);
    } else {
        return visitor.visitChildren(this);
    }
};




ProgParser.SigParamsContext = SigParamsContext;

ProgParser.prototype.sigParams = function() {

    var localctx = new SigParamsContext(this, this._ctx, this.state);
    this.enterRule(localctx, 28, ProgParser.RULE_sigParams);
    var _la = 0; // Token type
    try {
        this.enterOuterAlt(localctx, 1);
        this.state = 140;
        this.sigDeclare();
        this.state = 145;
        this._errHandler.sync(this);
        _la = this._input.LA(1);
        while(_la===ProgParser.T__6) {
            this.state = 141;
            this.match(ProgParser.T__6);
            this.state = 142;
            this.sigDeclare();
            this.state = 147;
            this._errHandler.sync(this);
            _la = this._input.LA(1);
        }
    } catch (re) {
    	if(re instanceof antlr4.error.RecognitionException) {
	        localctx.exception = re;
	        this._errHandler.reportError(this, re);
	        this._errHandler.recover(this, re);
	    } else {
	    	throw re;
	    }
    } finally {
        this.exitRule();
    }
    return localctx;
};

function SigDeclareContext(parser, parent, invokingState) {
	if(parent===undefined) {
	    parent = null;
	}
	if(invokingState===undefined || invokingState===null) {
		invokingState = -1;
	}
	antlr4.ParserRuleContext.call(this, parent, invokingState);
    this.parser = parser;
    this.ruleIndex = ProgParser.RULE_sigDeclare;
    return this;
}

SigDeclareContext.prototype = Object.create(antlr4.ParserRuleContext.prototype);
SigDeclareContext.prototype.constructor = SigDeclareContext;

SigDeclareContext.prototype.sigType = function() {
    return this.getTypedRuleContext(SigTypeContext,0);
};

SigDeclareContext.prototype.name = function() {
    return this.getTypedRuleContext(NameContext,0);
};

SigDeclareContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitSigDeclare(this);
    } else {
        return visitor.visitChildren(this);
    }
};




ProgParser.SigDeclareContext = SigDeclareContext;

ProgParser.prototype.sigDeclare = function() {

    var localctx = new SigDeclareContext(this, this._ctx, this.state);
    this.enterRule(localctx, 30, ProgParser.RULE_sigDeclare);
    try {
        this.enterOuterAlt(localctx, 1);
        this.state = 148;
        this.sigType();
        this.state = 149;
        this.name();
    } catch (re) {
    	if(re instanceof antlr4.error.RecognitionException) {
	        localctx.exception = re;
	        this._errHandler.reportError(this, re);
	        this._errHandler.recover(this, re);
	    } else {
	    	throw re;
	    }
    } finally {
        this.exitRule();
    }
    return localctx;
};

function ParamsContext(parser, parent, invokingState) {
	if(parent===undefined) {
	    parent = null;
	}
	if(invokingState===undefined || invokingState===null) {
		invokingState = -1;
	}
	antlr4.ParserRuleContext.call(this, parent, invokingState);
    this.parser = parser;
    this.ruleIndex = ProgParser.RULE_params;
    return this;
}

ParamsContext.prototype = Object.create(antlr4.ParserRuleContext.prototype);
ParamsContext.prototype.constructor = ParamsContext;

ParamsContext.prototype.expr = function(i) {
    if(i===undefined) {
        i = null;
    }
    if(i===null) {
        return this.getTypedRuleContexts(ExprContext);
    } else {
        return this.getTypedRuleContext(ExprContext,i);
    }
};

ParamsContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitParams(this);
    } else {
        return visitor.visitChildren(this);
    }
};




ProgParser.ParamsContext = ParamsContext;

ProgParser.prototype.params = function() {

    var localctx = new ParamsContext(this, this._ctx, this.state);
    this.enterRule(localctx, 32, ProgParser.RULE_params);
    var _la = 0; // Token type
    try {
        this.enterOuterAlt(localctx, 1);
        this.state = 151;
        this.expr(0);
        this.state = 156;
        this._errHandler.sync(this);
        _la = this._input.LA(1);
        while(_la===ProgParser.T__6) {
            this.state = 152;
            this.match(ProgParser.T__6);
            this.state = 153;
            this.expr(0);
            this.state = 158;
            this._errHandler.sync(this);
            _la = this._input.LA(1);
        }
    } catch (re) {
    	if(re instanceof antlr4.error.RecognitionException) {
	        localctx.exception = re;
	        this._errHandler.reportError(this, re);
	        this._errHandler.recover(this, re);
	    } else {
	    	throw re;
	    }
    } finally {
        this.exitRule();
    }
    return localctx;
};

function ValContext(parser, parent, invokingState) {
	if(parent===undefined) {
	    parent = null;
	}
	if(invokingState===undefined || invokingState===null) {
		invokingState = -1;
	}
	antlr4.ParserRuleContext.call(this, parent, invokingState);
    this.parser = parser;
    this.ruleIndex = ProgParser.RULE_val;
    return this;
}

ValContext.prototype = Object.create(antlr4.ParserRuleContext.prototype);
ValContext.prototype.constructor = ValContext;

ValContext.prototype.name = function() {
    return this.getTypedRuleContext(NameContext,0);
};

ValContext.prototype.NUMBER = function() {
    return this.getToken(ProgParser.NUMBER, 0);
};

ValContext.prototype.CHARACTER = function() {
    return this.getToken(ProgParser.CHARACTER, 0);
};

ValContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitVal(this);
    } else {
        return visitor.visitChildren(this);
    }
};




ProgParser.ValContext = ValContext;

ProgParser.prototype.val = function() {

    var localctx = new ValContext(this, this._ctx, this.state);
    this.enterRule(localctx, 34, ProgParser.RULE_val);
    try {
        this.state = 162;
        switch(this._input.LA(1)) {
        case ProgParser.NAME:
            this.enterOuterAlt(localctx, 1);
            this.state = 159;
            this.name();
            break;
        case ProgParser.NUMBER:
            this.enterOuterAlt(localctx, 2);
            this.state = 160;
            this.match(ProgParser.NUMBER);
            break;
        case ProgParser.CHARACTER:
            this.enterOuterAlt(localctx, 3);
            this.state = 161;
            this.match(ProgParser.CHARACTER);
            break;
        default:
            throw new antlr4.error.NoViableAltException(this);
        }
    } catch (re) {
    	if(re instanceof antlr4.error.RecognitionException) {
	        localctx.exception = re;
	        this._errHandler.reportError(this, re);
	        this._errHandler.recover(this, re);
	    } else {
	    	throw re;
	    }
    } finally {
        this.exitRule();
    }
    return localctx;
};

function NameContext(parser, parent, invokingState) {
	if(parent===undefined) {
	    parent = null;
	}
	if(invokingState===undefined || invokingState===null) {
		invokingState = -1;
	}
	antlr4.ParserRuleContext.call(this, parent, invokingState);
    this.parser = parser;
    this.ruleIndex = ProgParser.RULE_name;
    return this;
}

NameContext.prototype = Object.create(antlr4.ParserRuleContext.prototype);
NameContext.prototype.constructor = NameContext;

NameContext.prototype.NAME = function() {
    return this.getToken(ProgParser.NAME, 0);
};

NameContext.prototype.expr = function() {
    return this.getTypedRuleContext(ExprContext,0);
};

NameContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitName(this);
    } else {
        return visitor.visitChildren(this);
    }
};




ProgParser.NameContext = NameContext;

ProgParser.prototype.name = function() {

    var localctx = new NameContext(this, this._ctx, this.state);
    this.enterRule(localctx, 36, ProgParser.RULE_name);
    var _la = 0; // Token type
    try {
        this.enterOuterAlt(localctx, 1);
        this.state = 164;
        this.match(ProgParser.NAME);
        this.state = 170;
        var la_ = this._interp.adaptivePredict(this._input,16,this._ctx);
        if(la_===1) {
            this.state = 165;
            this.match(ProgParser.T__4);
            this.state = 167;
            _la = this._input.LA(1);
            if(((((_la - 11)) & ~0x1f) == 0 && ((1 << (_la - 11)) & ((1 << (ProgParser.T__10 - 11)) | (1 << (ProgParser.T__11 - 11)) | (1 << (ProgParser.T__12 - 11)) | (1 << (ProgParser.T__22 - 11)) | (1 << (ProgParser.T__24 - 11)) | (1 << (ProgParser.NAME - 11)) | (1 << (ProgParser.FUNCTION_NAME - 11)) | (1 << (ProgParser.CHARACTER - 11)) | (1 << (ProgParser.NUMBER - 11)))) !== 0)) {
                this.state = 166;
                this.expr(0);
            }

            this.state = 169;
            this.match(ProgParser.T__5);

        }
    } catch (re) {
    	if(re instanceof antlr4.error.RecognitionException) {
	        localctx.exception = re;
	        this._errHandler.reportError(this, re);
	        this._errHandler.recover(this, re);
	    } else {
	    	throw re;
	    }
    } finally {
        this.exitRule();
    }
    return localctx;
};

function ExprContext(parser, parent, invokingState) {
	if(parent===undefined) {
	    parent = null;
	}
	if(invokingState===undefined || invokingState===null) {
		invokingState = -1;
	}
	antlr4.ParserRuleContext.call(this, parent, invokingState);
    this.parser = parser;
    this.ruleIndex = ProgParser.RULE_expr;
    return this;
}

ExprContext.prototype = Object.create(antlr4.ParserRuleContext.prototype);
ExprContext.prototype.constructor = ExprContext;


 
ExprContext.prototype.copyFrom = function(ctx) {
    antlr4.ParserRuleContext.prototype.copyFrom.call(this, ctx);
};

function ParContext(parser, ctx) {
	ExprContext.call(this, parser);
    ExprContext.prototype.copyFrom.call(this, ctx);
    return this;
}

ParContext.prototype = Object.create(ExprContext.prototype);
ParContext.prototype.constructor = ParContext;

ProgParser.ParContext = ParContext;

ParContext.prototype.expr = function() {
    return this.getTypedRuleContext(ExprContext,0);
};
ParContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitPar(this);
    } else {
        return visitor.visitChildren(this);
    }
};


function InfContext(parser, ctx) {
	ExprContext.call(this, parser);
    ExprContext.prototype.copyFrom.call(this, ctx);
    return this;
}

InfContext.prototype = Object.create(ExprContext.prototype);
InfContext.prototype.constructor = InfContext;

ProgParser.InfContext = InfContext;

InfContext.prototype.expr = function(i) {
    if(i===undefined) {
        i = null;
    }
    if(i===null) {
        return this.getTypedRuleContexts(ExprContext);
    } else {
        return this.getTypedRuleContext(ExprContext,i);
    }
};
InfContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitInf(this);
    } else {
        return visitor.visitChildren(this);
    }
};


function EgalContext(parser, ctx) {
	ExprContext.call(this, parser);
    ExprContext.prototype.copyFrom.call(this, ctx);
    return this;
}

EgalContext.prototype = Object.create(ExprContext.prototype);
EgalContext.prototype.constructor = EgalContext;

ProgParser.EgalContext = EgalContext;

EgalContext.prototype.expr = function(i) {
    if(i===undefined) {
        i = null;
    }
    if(i===null) {
        return this.getTypedRuleContexts(ExprContext);
    } else {
        return this.getTypedRuleContext(ExprContext,i);
    }
};
EgalContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitEgal(this);
    } else {
        return visitor.visitChildren(this);
    }
};


function MultContext(parser, ctx) {
	ExprContext.call(this, parser);
    ExprContext.prototype.copyFrom.call(this, ctx);
    return this;
}

MultContext.prototype = Object.create(ExprContext.prototype);
MultContext.prototype.constructor = MultContext;

ProgParser.MultContext = MultContext;

MultContext.prototype.expr = function(i) {
    if(i===undefined) {
        i = null;
    }
    if(i===null) {
        return this.getTypedRuleContexts(ExprContext);
    } else {
        return this.getTypedRuleContext(ExprContext,i);
    }
};
MultContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitMult(this);
    } else {
        return visitor.visitChildren(this);
    }
};


function ValeurContext(parser, ctx) {
	ExprContext.call(this, parser);
    ExprContext.prototype.copyFrom.call(this, ctx);
    return this;
}

ValeurContext.prototype = Object.create(ExprContext.prototype);
ValeurContext.prototype.constructor = ValeurContext;

ProgParser.ValeurContext = ValeurContext;

ValeurContext.prototype.val = function() {
    return this.getTypedRuleContext(ValContext,0);
};
ValeurContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitValeur(this);
    } else {
        return visitor.visitChildren(this);
    }
};


function AffectContext(parser, ctx) {
	ExprContext.call(this, parser);
    ExprContext.prototype.copyFrom.call(this, ctx);
    return this;
}

AffectContext.prototype = Object.create(ExprContext.prototype);
AffectContext.prototype.constructor = AffectContext;

ProgParser.AffectContext = AffectContext;

AffectContext.prototype.name = function() {
    return this.getTypedRuleContext(NameContext,0);
};

AffectContext.prototype.expr = function() {
    return this.getTypedRuleContext(ExprContext,0);
};
AffectContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitAffect(this);
    } else {
        return visitor.visitChildren(this);
    }
};


function OuContext(parser, ctx) {
	ExprContext.call(this, parser);
    ExprContext.prototype.copyFrom.call(this, ctx);
    return this;
}

OuContext.prototype = Object.create(ExprContext.prototype);
OuContext.prototype.constructor = OuContext;

ProgParser.OuContext = OuContext;

OuContext.prototype.expr = function(i) {
    if(i===undefined) {
        i = null;
    }
    if(i===null) {
        return this.getTypedRuleContexts(ExprContext);
    } else {
        return this.getTypedRuleContext(ExprContext,i);
    }
};
OuContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitOu(this);
    } else {
        return visitor.visitChildren(this);
    }
};


function DiffContext(parser, ctx) {
	ExprContext.call(this, parser);
    ExprContext.prototype.copyFrom.call(this, ctx);
    return this;
}

DiffContext.prototype = Object.create(ExprContext.prototype);
DiffContext.prototype.constructor = DiffContext;

ProgParser.DiffContext = DiffContext;

DiffContext.prototype.expr = function(i) {
    if(i===undefined) {
        i = null;
    }
    if(i===null) {
        return this.getTypedRuleContexts(ExprContext);
    } else {
        return this.getTypedRuleContext(ExprContext,i);
    }
};
DiffContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitDiff(this);
    } else {
        return visitor.visitChildren(this);
    }
};


function NonContext(parser, ctx) {
	ExprContext.call(this, parser);
    ExprContext.prototype.copyFrom.call(this, ctx);
    return this;
}

NonContext.prototype = Object.create(ExprContext.prototype);
NonContext.prototype.constructor = NonContext;

ProgParser.NonContext = NonContext;

NonContext.prototype.expr = function() {
    return this.getTypedRuleContext(ExprContext,0);
};
NonContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitNon(this);
    } else {
        return visitor.visitChildren(this);
    }
};


function PlusContext(parser, ctx) {
	ExprContext.call(this, parser);
    ExprContext.prototype.copyFrom.call(this, ctx);
    return this;
}

PlusContext.prototype = Object.create(ExprContext.prototype);
PlusContext.prototype.constructor = PlusContext;

ProgParser.PlusContext = PlusContext;

PlusContext.prototype.expr = function(i) {
    if(i===undefined) {
        i = null;
    }
    if(i===null) {
        return this.getTypedRuleContexts(ExprContext);
    } else {
        return this.getTypedRuleContext(ExprContext,i);
    }
};
PlusContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitPlus(this);
    } else {
        return visitor.visitChildren(this);
    }
};


function SupContext(parser, ctx) {
	ExprContext.call(this, parser);
    ExprContext.prototype.copyFrom.call(this, ctx);
    return this;
}

SupContext.prototype = Object.create(ExprContext.prototype);
SupContext.prototype.constructor = SupContext;

ProgParser.SupContext = SupContext;

SupContext.prototype.expr = function(i) {
    if(i===undefined) {
        i = null;
    }
    if(i===null) {
        return this.getTypedRuleContexts(ExprContext);
    } else {
        return this.getTypedRuleContext(ExprContext,i);
    }
};
SupContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitSup(this);
    } else {
        return visitor.visitChildren(this);
    }
};


function EtContext(parser, ctx) {
	ExprContext.call(this, parser);
    ExprContext.prototype.copyFrom.call(this, ctx);
    return this;
}

EtContext.prototype = Object.create(ExprContext.prototype);
EtContext.prototype.constructor = EtContext;

ProgParser.EtContext = EtContext;

EtContext.prototype.expr = function(i) {
    if(i===undefined) {
        i = null;
    }
    if(i===null) {
        return this.getTypedRuleContexts(ExprContext);
    } else {
        return this.getTypedRuleContext(ExprContext,i);
    }
};
EtContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitEt(this);
    } else {
        return visitor.visitChildren(this);
    }
};


function InvContext(parser, ctx) {
	ExprContext.call(this, parser);
    ExprContext.prototype.copyFrom.call(this, ctx);
    return this;
}

InvContext.prototype = Object.create(ExprContext.prototype);
InvContext.prototype.constructor = InvContext;

ProgParser.InvContext = InvContext;

InvContext.prototype.expr = function() {
    return this.getTypedRuleContext(ExprContext,0);
};
InvContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitInv(this);
    } else {
        return visitor.visitChildren(this);
    }
};


function DivContext(parser, ctx) {
	ExprContext.call(this, parser);
    ExprContext.prototype.copyFrom.call(this, ctx);
    return this;
}

DivContext.prototype = Object.create(ExprContext.prototype);
DivContext.prototype.constructor = DivContext;

ProgParser.DivContext = DivContext;

DivContext.prototype.expr = function(i) {
    if(i===undefined) {
        i = null;
    }
    if(i===null) {
        return this.getTypedRuleContexts(ExprContext);
    } else {
        return this.getTypedRuleContext(ExprContext,i);
    }
};
DivContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitDiv(this);
    } else {
        return visitor.visitChildren(this);
    }
};


function CallfunctionContext(parser, ctx) {
	ExprContext.call(this, parser);
    ExprContext.prototype.copyFrom.call(this, ctx);
    return this;
}

CallfunctionContext.prototype = Object.create(ExprContext.prototype);
CallfunctionContext.prototype.constructor = CallfunctionContext;

ProgParser.CallfunctionContext = CallfunctionContext;

CallfunctionContext.prototype.FUNCTION_NAME = function() {
    return this.getToken(ProgParser.FUNCTION_NAME, 0);
};

CallfunctionContext.prototype.params = function() {
    return this.getTypedRuleContext(ParamsContext,0);
};
CallfunctionContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitCallfunction(this);
    } else {
        return visitor.visitChildren(this);
    }
};


function PredecrContext(parser, ctx) {
	ExprContext.call(this, parser);
    ExprContext.prototype.copyFrom.call(this, ctx);
    return this;
}

PredecrContext.prototype = Object.create(ExprContext.prototype);
PredecrContext.prototype.constructor = PredecrContext;

ProgParser.PredecrContext = PredecrContext;

PredecrContext.prototype.name = function() {
    return this.getTypedRuleContext(NameContext,0);
};
PredecrContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitPredecr(this);
    } else {
        return visitor.visitChildren(this);
    }
};


function PreincrContext(parser, ctx) {
	ExprContext.call(this, parser);
    ExprContext.prototype.copyFrom.call(this, ctx);
    return this;
}

PreincrContext.prototype = Object.create(ExprContext.prototype);
PreincrContext.prototype.constructor = PreincrContext;

ProgParser.PreincrContext = PreincrContext;

PreincrContext.prototype.name = function() {
    return this.getTypedRuleContext(NameContext,0);
};
PreincrContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitPreincr(this);
    } else {
        return visitor.visitChildren(this);
    }
};


function PostdecrContext(parser, ctx) {
	ExprContext.call(this, parser);
    ExprContext.prototype.copyFrom.call(this, ctx);
    return this;
}

PostdecrContext.prototype = Object.create(ExprContext.prototype);
PostdecrContext.prototype.constructor = PostdecrContext;

ProgParser.PostdecrContext = PostdecrContext;

PostdecrContext.prototype.name = function() {
    return this.getTypedRuleContext(NameContext,0);
};
PostdecrContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitPostdecr(this);
    } else {
        return visitor.visitChildren(this);
    }
};


function SupegalContext(parser, ctx) {
	ExprContext.call(this, parser);
    ExprContext.prototype.copyFrom.call(this, ctx);
    return this;
}

SupegalContext.prototype = Object.create(ExprContext.prototype);
SupegalContext.prototype.constructor = SupegalContext;

ProgParser.SupegalContext = SupegalContext;

SupegalContext.prototype.expr = function(i) {
    if(i===undefined) {
        i = null;
    }
    if(i===null) {
        return this.getTypedRuleContexts(ExprContext);
    } else {
        return this.getTypedRuleContext(ExprContext,i);
    }
};
SupegalContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitSupegal(this);
    } else {
        return visitor.visitChildren(this);
    }
};


function MoinsContext(parser, ctx) {
	ExprContext.call(this, parser);
    ExprContext.prototype.copyFrom.call(this, ctx);
    return this;
}

MoinsContext.prototype = Object.create(ExprContext.prototype);
MoinsContext.prototype.constructor = MoinsContext;

ProgParser.MoinsContext = MoinsContext;

MoinsContext.prototype.expr = function(i) {
    if(i===undefined) {
        i = null;
    }
    if(i===null) {
        return this.getTypedRuleContexts(ExprContext);
    } else {
        return this.getTypedRuleContext(ExprContext,i);
    }
};
MoinsContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitMoins(this);
    } else {
        return visitor.visitChildren(this);
    }
};


function PostincrContext(parser, ctx) {
	ExprContext.call(this, parser);
    ExprContext.prototype.copyFrom.call(this, ctx);
    return this;
}

PostincrContext.prototype = Object.create(ExprContext.prototype);
PostincrContext.prototype.constructor = PostincrContext;

ProgParser.PostincrContext = PostincrContext;

PostincrContext.prototype.name = function() {
    return this.getTypedRuleContext(NameContext,0);
};
PostincrContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitPostincr(this);
    } else {
        return visitor.visitChildren(this);
    }
};


function ModuloContext(parser, ctx) {
	ExprContext.call(this, parser);
    ExprContext.prototype.copyFrom.call(this, ctx);
    return this;
}

ModuloContext.prototype = Object.create(ExprContext.prototype);
ModuloContext.prototype.constructor = ModuloContext;

ProgParser.ModuloContext = ModuloContext;

ModuloContext.prototype.expr = function(i) {
    if(i===undefined) {
        i = null;
    }
    if(i===null) {
        return this.getTypedRuleContexts(ExprContext);
    } else {
        return this.getTypedRuleContext(ExprContext,i);
    }
};
ModuloContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitModulo(this);
    } else {
        return visitor.visitChildren(this);
    }
};


function InfegalContext(parser, ctx) {
	ExprContext.call(this, parser);
    ExprContext.prototype.copyFrom.call(this, ctx);
    return this;
}

InfegalContext.prototype = Object.create(ExprContext.prototype);
InfegalContext.prototype.constructor = InfegalContext;

ProgParser.InfegalContext = InfegalContext;

InfegalContext.prototype.expr = function(i) {
    if(i===undefined) {
        i = null;
    }
    if(i===null) {
        return this.getTypedRuleContexts(ExprContext);
    } else {
        return this.getTypedRuleContext(ExprContext,i);
    }
};
InfegalContext.prototype.accept = function(visitor) {
    if ( visitor instanceof ProgVisitor ) {
        return visitor.visitInfegal(this);
    } else {
        return visitor.visitChildren(this);
    }
};



ProgParser.prototype.expr = function(_p) {
	if(_p===undefined) {
	    _p = 0;
	}
    var _parentctx = this._ctx;
    var _parentState = this.state;
    var localctx = new ExprContext(this, this._ctx, _parentState);
    var _prevctx = localctx;
    var _startState = 38;
    this.enterRecursionRule(localctx, 38, ProgParser.RULE_expr, _p);
    var _la = 0; // Token type
    try {
        this.enterOuterAlt(localctx, 1);
        this.state = 202;
        var la_ = this._interp.adaptivePredict(this._input,18,this._ctx);
        switch(la_) {
        case 1:
            localctx = new InvContext(this, localctx);
            this._ctx = localctx;
            _prevctx = localctx;

            this.state = 173;
            this.match(ProgParser.T__11);
            this.state = 174;
            this.expr(17);
            break;

        case 2:
            localctx = new AffectContext(this, localctx);
            this._ctx = localctx;
            _prevctx = localctx;
            this.state = 175;
            this.name();
            this.state = 176;
            this.match(ProgParser.T__0);
            this.state = 177;
            this.expr(13);
            break;

        case 3:
            localctx = new NonContext(this, localctx);
            this._ctx = localctx;
            _prevctx = localctx;
            this.state = 179;
            this.match(ProgParser.T__24);
            this.state = 180;
            this.expr(3);
            break;

        case 4:
            localctx = new PostincrContext(this, localctx);
            this._ctx = localctx;
            _prevctx = localctx;
            this.state = 181;
            this.name();
            this.state = 182;
            this.match(ProgParser.T__10);
            break;

        case 5:
            localctx = new PreincrContext(this, localctx);
            this._ctx = localctx;
            _prevctx = localctx;
            this.state = 184;
            this.match(ProgParser.T__10);
            this.state = 185;
            this.name();
            break;

        case 6:
            localctx = new PostdecrContext(this, localctx);
            this._ctx = localctx;
            _prevctx = localctx;
            this.state = 186;
            this.name();
            this.state = 187;
            this.match(ProgParser.T__12);
            break;

        case 7:
            localctx = new PredecrContext(this, localctx);
            this._ctx = localctx;
            _prevctx = localctx;
            this.state = 189;
            this.match(ProgParser.T__12);
            this.state = 190;
            this.name();
            break;

        case 8:
            localctx = new ParContext(this, localctx);
            this._ctx = localctx;
            _prevctx = localctx;
            this.state = 191;
            this.match(ProgParser.T__22);
            this.state = 192;
            this.expr(0);
            this.state = 193;
            this.match(ProgParser.T__23);
            break;

        case 9:
            localctx = new CallfunctionContext(this, localctx);
            this._ctx = localctx;
            _prevctx = localctx;
            this.state = 195;
            this.match(ProgParser.FUNCTION_NAME);
            this.state = 196;
            this.match(ProgParser.T__22);
            this.state = 198;
            _la = this._input.LA(1);
            if(((((_la - 11)) & ~0x1f) == 0 && ((1 << (_la - 11)) & ((1 << (ProgParser.T__10 - 11)) | (1 << (ProgParser.T__11 - 11)) | (1 << (ProgParser.T__12 - 11)) | (1 << (ProgParser.T__22 - 11)) | (1 << (ProgParser.T__24 - 11)) | (1 << (ProgParser.NAME - 11)) | (1 << (ProgParser.FUNCTION_NAME - 11)) | (1 << (ProgParser.CHARACTER - 11)) | (1 << (ProgParser.NUMBER - 11)))) !== 0)) {
                this.state = 197;
                this.params();
            }

            this.state = 200;
            this.match(ProgParser.T__23);
            break;

        case 10:
            localctx = new ValeurContext(this, localctx);
            this._ctx = localctx;
            _prevctx = localctx;
            this.state = 201;
            this.val();
            break;

        }
        this._ctx.stop = this._input.LT(-1);
        this.state = 245;
        this._errHandler.sync(this);
        var _alt = this._interp.adaptivePredict(this._input,20,this._ctx)
        while(_alt!=2 && _alt!=antlr4.atn.ATN.INVALID_ALT_NUMBER) {
            if(_alt===1) {
                if(this._parseListeners!==null) {
                    this.triggerExitRuleEvent();
                }
                _prevctx = localctx;
                this.state = 243;
                var la_ = this._interp.adaptivePredict(this._input,19,this._ctx);
                switch(la_) {
                case 1:
                    localctx = new MultContext(this, new ExprContext(this, _parentctx, _parentState));
                    this.pushNewRecursionContext(localctx, _startState, ProgParser.RULE_expr);
                    this.state = 204;
                    if (!( this.precpred(this._ctx, 23))) {
                        throw new antlr4.error.FailedPredicateException(this, "this.precpred(this._ctx, 23)");
                    }
                    this.state = 205;
                    this.match(ProgParser.T__7);
                    this.state = 206;
                    this.expr(24);
                    break;

                case 2:
                    localctx = new DivContext(this, new ExprContext(this, _parentctx, _parentState));
                    this.pushNewRecursionContext(localctx, _startState, ProgParser.RULE_expr);
                    this.state = 207;
                    if (!( this.precpred(this._ctx, 22))) {
                        throw new antlr4.error.FailedPredicateException(this, "this.precpred(this._ctx, 22)");
                    }
                    this.state = 208;
                    this.match(ProgParser.T__8);
                    this.state = 209;
                    this.expr(23);
                    break;

                case 3:
                    localctx = new PlusContext(this, new ExprContext(this, _parentctx, _parentState));
                    this.pushNewRecursionContext(localctx, _startState, ProgParser.RULE_expr);
                    this.state = 210;
                    if (!( this.precpred(this._ctx, 21))) {
                        throw new antlr4.error.FailedPredicateException(this, "this.precpred(this._ctx, 21)");
                    }
                    this.state = 211;
                    this.match(ProgParser.T__9);
                    this.state = 212;
                    this.expr(22);
                    break;

                case 4:
                    localctx = new MoinsContext(this, new ExprContext(this, _parentctx, _parentState));
                    this.pushNewRecursionContext(localctx, _startState, ProgParser.RULE_expr);
                    this.state = 213;
                    if (!( this.precpred(this._ctx, 18))) {
                        throw new antlr4.error.FailedPredicateException(this, "this.precpred(this._ctx, 18)");
                    }
                    this.state = 214;
                    this.match(ProgParser.T__11);
                    this.state = 215;
                    this.expr(19);
                    break;

                case 5:
                    localctx = new ModuloContext(this, new ExprContext(this, _parentctx, _parentState));
                    this.pushNewRecursionContext(localctx, _startState, ProgParser.RULE_expr);
                    this.state = 216;
                    if (!( this.precpred(this._ctx, 14))) {
                        throw new antlr4.error.FailedPredicateException(this, "this.precpred(this._ctx, 14)");
                    }
                    this.state = 217;
                    this.match(ProgParser.T__13);
                    this.state = 218;
                    this.expr(15);
                    break;

                case 6:
                    localctx = new EgalContext(this, new ExprContext(this, _parentctx, _parentState));
                    this.pushNewRecursionContext(localctx, _startState, ProgParser.RULE_expr);
                    this.state = 219;
                    if (!( this.precpred(this._ctx, 12))) {
                        throw new antlr4.error.FailedPredicateException(this, "this.precpred(this._ctx, 12)");
                    }
                    this.state = 220;
                    this.match(ProgParser.T__14);
                    this.state = 221;
                    this.expr(13);
                    break;

                case 7:
                    localctx = new DiffContext(this, new ExprContext(this, _parentctx, _parentState));
                    this.pushNewRecursionContext(localctx, _startState, ProgParser.RULE_expr);
                    this.state = 222;
                    if (!( this.precpred(this._ctx, 11))) {
                        throw new antlr4.error.FailedPredicateException(this, "this.precpred(this._ctx, 11)");
                    }
                    this.state = 223;
                    this.match(ProgParser.T__15);
                    this.state = 224;
                    this.expr(12);
                    break;

                case 8:
                    localctx = new SupContext(this, new ExprContext(this, _parentctx, _parentState));
                    this.pushNewRecursionContext(localctx, _startState, ProgParser.RULE_expr);
                    this.state = 225;
                    if (!( this.precpred(this._ctx, 10))) {
                        throw new antlr4.error.FailedPredicateException(this, "this.precpred(this._ctx, 10)");
                    }
                    this.state = 226;
                    this.match(ProgParser.T__16);
                    this.state = 227;
                    this.expr(11);
                    break;

                case 9:
                    localctx = new SupegalContext(this, new ExprContext(this, _parentctx, _parentState));
                    this.pushNewRecursionContext(localctx, _startState, ProgParser.RULE_expr);
                    this.state = 228;
                    if (!( this.precpred(this._ctx, 9))) {
                        throw new antlr4.error.FailedPredicateException(this, "this.precpred(this._ctx, 9)");
                    }
                    this.state = 229;
                    this.match(ProgParser.T__17);
                    this.state = 230;
                    this.expr(10);
                    break;

                case 10:
                    localctx = new InfContext(this, new ExprContext(this, _parentctx, _parentState));
                    this.pushNewRecursionContext(localctx, _startState, ProgParser.RULE_expr);
                    this.state = 231;
                    if (!( this.precpred(this._ctx, 8))) {
                        throw new antlr4.error.FailedPredicateException(this, "this.precpred(this._ctx, 8)");
                    }
                    this.state = 232;
                    this.match(ProgParser.T__18);
                    this.state = 233;
                    this.expr(9);
                    break;

                case 11:
                    localctx = new InfegalContext(this, new ExprContext(this, _parentctx, _parentState));
                    this.pushNewRecursionContext(localctx, _startState, ProgParser.RULE_expr);
                    this.state = 234;
                    if (!( this.precpred(this._ctx, 7))) {
                        throw new antlr4.error.FailedPredicateException(this, "this.precpred(this._ctx, 7)");
                    }
                    this.state = 235;
                    this.match(ProgParser.T__19);
                    this.state = 236;
                    this.expr(8);
                    break;

                case 12:
                    localctx = new OuContext(this, new ExprContext(this, _parentctx, _parentState));
                    this.pushNewRecursionContext(localctx, _startState, ProgParser.RULE_expr);
                    this.state = 237;
                    if (!( this.precpred(this._ctx, 6))) {
                        throw new antlr4.error.FailedPredicateException(this, "this.precpred(this._ctx, 6)");
                    }
                    this.state = 238;
                    this.match(ProgParser.T__20);
                    this.state = 239;
                    this.expr(7);
                    break;

                case 13:
                    localctx = new EtContext(this, new ExprContext(this, _parentctx, _parentState));
                    this.pushNewRecursionContext(localctx, _startState, ProgParser.RULE_expr);
                    this.state = 240;
                    if (!( this.precpred(this._ctx, 5))) {
                        throw new antlr4.error.FailedPredicateException(this, "this.precpred(this._ctx, 5)");
                    }
                    this.state = 241;
                    this.match(ProgParser.T__21);
                    this.state = 242;
                    this.expr(6);
                    break;

                } 
            }
            this.state = 247;
            this._errHandler.sync(this);
            _alt = this._interp.adaptivePredict(this._input,20,this._ctx);
        }

    } catch( error) {
        if(error instanceof antlr4.error.RecognitionException) {
	        localctx.exception = error;
	        this._errHandler.reportError(this, error);
	        this._errHandler.recover(this, error);
	    } else {
	    	throw error;
	    }
    } finally {
        this.unrollRecursionContexts(_parentctx)
    }
    return localctx;
};


ProgParser.prototype.sempred = function(localctx, ruleIndex, predIndex) {
	switch(ruleIndex) {
	case 19:
			return this.expr_sempred(localctx, predIndex);
    default:
        throw "No predicate with index:" + ruleIndex;
   }
};

ProgParser.prototype.expr_sempred = function(localctx, predIndex) {
	switch(predIndex) {
		case 0:
			return this.precpred(this._ctx, 23);
		case 1:
			return this.precpred(this._ctx, 22);
		case 2:
			return this.precpred(this._ctx, 21);
		case 3:
			return this.precpred(this._ctx, 18);
		case 4:
			return this.precpred(this._ctx, 14);
		case 5:
			return this.precpred(this._ctx, 12);
		case 6:
			return this.precpred(this._ctx, 11);
		case 7:
			return this.precpred(this._ctx, 10);
		case 8:
			return this.precpred(this._ctx, 9);
		case 9:
			return this.precpred(this._ctx, 8);
		case 10:
			return this.precpred(this._ctx, 7);
		case 11:
			return this.precpred(this._ctx, 6);
		case 12:
			return this.precpred(this._ctx, 5);
		default:
			throw "No predicate with index:" + predIndex;
	}
};


exports.ProgParser = ProgParser;
