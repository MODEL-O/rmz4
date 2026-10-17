; undefined FUN_080e502c(void)
; entry 0x80e502c  size 30 bytes

080E502C: 10b5         push {r4,lr}
080E502E: 041c         add r4,r0,#0x0
080E5030: 0649         ldr r1,[0x080e504c]
080E5032: 37f765ff     bl 0x0801cf00
080E5036: 2020         mov r0,#0x20
080E5038: 2066         str r0,[r4,#0x60]
080E503A: 0021         mov r1,#0x0
080E503C: 0120         mov r0,#0x1
080E503E: e074         strb r0,[r4,#0x13]
080E5040: a174         strb r1,[r4,#0x12]
080E5042: 6073         strb r0,[r4,#0xd]
080E5044: 10bc         pop {r4}
080E5046: 01bc         pop {r0}
080E5048: 0047         bx r0
