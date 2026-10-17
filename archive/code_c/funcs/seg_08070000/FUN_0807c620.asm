; undefined FUN_0807c620(void)
; entry 0x807c620  size 64 bytes

0807C620: 00b5         push {lr}
0807C622: 031c         add r3,r0,#0x0
0807C624: ce30         add r0,#0xce
0807C626: 0022         mov r2,#0x0
0807C628: 0270         strb r2,[r0,#0x0]
0807C62A: 0130         add r0,#0x1
0807C62C: 0270         strb r2,[r0,#0x0]
0807C62E: bf20         mov r0,#0xbf
0807C630: c018         add r0,r0,r3
0807C632: 8446         mov r12,r0
0807C634: 0178         ldrb r1,[r0,#0x0]
0807C636: fe20         mov r0,#0xfe
0807C638: 0840         and r0,r1
0807C63A: 6146         mov r1,r12
0807C63C: 0870         strb r0,[r1,#0x0]
0807C63E: 181c         add r0,r3,#0x0
0807C640: d430         add r0,#0xd4
0807C642: 0270         strb r2,[r0,#0x0]
0807C644: 987b         ldrb r0,[r3,#0xe]
0807C646: 0130         add r0,#0x1
0807C648: 9873         strb r0,[r3,#0xe]
0807C64A: da73         strb r2,[r3,#0xf]
0807C64C: 0449         ldr r1,[0x0807c660]
0807C64E: 587b         ldrb r0,[r3,#0xd]
0807C650: 8000         lsl r0,r0,#0x2
0807C652: 4018         add r0,r0,r1
0807C654: 0168         ldr r1,[r0,#0x0]
0807C656: 181c         add r0,r3,#0x0
0807C658: acf092fc     bl 0x08128f80
0807C65C: 01bc         pop {r0}
0807C65E: 0047         bx r0
