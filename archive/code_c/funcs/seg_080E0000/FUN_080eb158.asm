; undefined FUN_080eb158(void)
; entry 0x80eb158  size 62 bytes

080EB158: 10b5         push {r4,lr}
080EB15A: 041c         add r4,r0,#0x0
080EB15C: 607a         ldrb r0,[r4,#0x9]
080EB15E: 0328         cmp r0,#0x3
080EB160: 16d1         bne 0x080eb190
080EB162: 211c         add r1,r4,#0x0
080EB164: b831         add r1,#0xb8
080EB166: 0878         ldrb r0,[r1,#0x0]
080EB168: c328         cmp r0,#0xc3
080EB16A: 0dd0         beq 0x080eb188
080EB16C: c320         mov r0,#0xc3
080EB16E: 0870         strb r0,[r1,#0x0]
080EB170: c322         mov r2,#0xc3
080EB172: 1202         lsl r2,r2,#0x8
080EB174: 201c         add r0,r4,#0x0
080EB176: 7030         add r0,#0x70
080EB178: 0178         ldrb r1,[r0,#0x0]
080EB17A: 1143         orr r1,r2
080EB17C: 201c         add r0,r4,#0x0
080EB17E: 31f7bffe     bl 0x0801cf00
080EB182: 201c         add r0,r4,#0x0
080EB184: 31f734ff     bl 0x0801cff0
080EB188: 211c         add r1,r4,#0x0
080EB18A: ba31         add r1,#0xba
080EB18C: 0120         mov r0,#0x1
080EB18E: 0880         strh r0,[r1,#0x0]
080EB190: 10bc         pop {r4}
080EB192: 01bc         pop {r0}
080EB194: 0047         bx r0
