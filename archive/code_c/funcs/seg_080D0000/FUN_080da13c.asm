; undefined FUN_080da13c(void)
; entry 0x80da13c  size 56 bytes

080DA13C: 10b5         push {r4,lr}
080DA13E: 041c         add r4,r0,#0x0
080DA140: 7c30         add r0,#0x7c
080DA142: 0278         ldrb r2,[r0,#0x0]
080DA144: 0023         mov r3,#0x0
080DA146: 1020         mov r0,#0x10
080DA148: a074         strb r0,[r4,#0x12]
080DA14A: e374         strb r3,[r4,#0x13]
080DA14C: 8021         mov r1,#0x80
080DA14E: 4900         lsl r1,r1,#0x1
080DA150: 5202         lsl r2,r2,#0x9
080DA152: 891a         sub r1,r1,r2
080DA154: e165         str r1,[r4,#0x5c]
080DA156: 2366         str r3,[r4,#0x60]
080DA158: b420         mov r0,#0xb4
080DA15A: 4843         mul r0,r1
080DA15C: 0028         cmp r0,#0x0
080DA15E: 00da         bge 0x080da162
080DA160: ff30         add r0,#0xff
080DA162: 0012         asr r0,r0,#0x8
080DA164: e065         str r0,[r4,#0x5c]
080DA166: 0349         ldr r1,[0x080da174]
080DA168: 201c         add r0,r4,#0x0
080DA16A: 42f7c9fe     bl 0x0801cf00
080DA16E: 10bc         pop {r4}
080DA170: 01bc         pop {r0}
080DA172: 0047         bx r0
