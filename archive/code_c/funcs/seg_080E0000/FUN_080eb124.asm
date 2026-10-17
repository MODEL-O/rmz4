; undefined FUN_080eb124(void)
; entry 0x80eb124  size 50 bytes

080EB124: 10b5         push {r4,lr}
080EB126: 041c         add r4,r0,#0x0
080EB128: 607a         ldrb r0,[r4,#0x9]
080EB12A: 0328         cmp r0,#0x3
080EB12C: 10d1         bne 0x080eb150
080EB12E: 211c         add r1,r4,#0x0
080EB130: b831         add r1,#0xb8
080EB132: 0878         ldrb r0,[r1,#0x0]
080EB134: 1528         cmp r0,#0x15
080EB136: 0bd0         beq 0x080eb150
080EB138: 1520         mov r0,#0x15
080EB13A: 0870         strb r0,[r1,#0x0]
080EB13C: 0002         lsl r0,r0,#0x8
080EB13E: 4839         sub r1,#0x48
080EB140: 0978         ldrb r1,[r1,#0x0]
080EB142: 0143         orr r1,r0
080EB144: 201c         add r0,r4,#0x0
080EB146: 31f7dbfe     bl 0x0801cf00
080EB14A: 201c         add r0,r4,#0x0
080EB14C: 31f750ff     bl 0x0801cff0
080EB150: 10bc         pop {r4}
080EB152: 01bc         pop {r0}
080EB154: 0047         bx r0
