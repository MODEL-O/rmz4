; undefined FUN_08066160(void)
; entry 0x8066160  size 42 bytes

08066160: 10b5         push {r4,lr}
08066162: 82b0         sub sp,#0x8
08066164: 041c         add r4,r0,#0x0
08066166: 0949         ldr r1,[0x0806618c]
08066168: 6846         mov r0,sp
0806616A: 0522         mov r2,#0x5
0806616C: c3f074f8     bl 0x08129258
08066170: a434         add r4,#0xa4
08066172: 0021         mov r1,#0x0
08066174: 605e         ldrsh r0,[r4,r1]
08066176: 0028         cmp r0,#0x0
08066178: 00da         bge 0x0806617c
0806617A: 0f30         add r0,#0xf
0806617C: 0011         asr r0,r0,#0x4
0806617E: 6844         add r0,sp
08066180: 0078         ldrb r0,[r0,#0x0]
08066182: 02b0         add sp,#0x8
08066184: 10bc         pop {r4}
08066186: 02bc         pop {r1}
08066188: 0847         bx r1
