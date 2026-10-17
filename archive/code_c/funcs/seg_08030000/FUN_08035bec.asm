; undefined FUN_08035bec(void)
; entry 0x8035bec  size 72 bytes

08035BEC: 10b5         push {r4,lr}
08035BEE: 041c         add r4,r0,#0x0
08035BF0: b430         add r0,#0xb4
08035BF2: 007b         ldrb r0,[r0,#0xc]
08035BF4: 0028         cmp r0,#0x0
08035BF6: 07d1         bne 0x08035c08
08035BF8: 0248         ldr r0,[0x08035c04]
08035BFA: 2218         add r2,r4,r0
08035BFC: 1078         ldrb r0,[r2,#0x0]
08035BFE: 1021         mov r1,#0x10
08035C00: 06e0         b 0x08035c10
08035C08: 0c49         ldr r1,[0x08035c3c]
08035C0A: 6218         add r2,r4,r1
08035C0C: 1078         ldrb r0,[r2,#0x0]
08035C0E: 2021         mov r1,#0x20
08035C10: 0843         orr r0,r1
08035C12: 1070         strb r0,[r2,#0x0]
08035C14: 0a49         ldr r1,[0x08035c40]
08035C16: 201c         add r0,r4,#0x0
08035C18: 0022         mov r2,#0x0
08035C1A: 0223         mov r3,#0x2
08035C1C: e7f7d4f9     bl 0x0801cfc8
08035C20: aa21         mov r1,#0xaa
08035C22: 4900         lsl r1,r1,#0x1
08035C24: 6018         add r0,r4,r1
08035C26: 0078         ldrb r0,[r0,#0x0]
08035C28: 0128         cmp r0,#0x1
08035C2A: 03d1         bne 0x08035c34
08035C2C: 0548         ldr r0,[0x08035c44]
08035C2E: 2118         add r1,r4,r0
08035C30: 0220         mov r0,#0x2
08035C32: 0870         strb r0,[r1,#0x0]
08035C34: 10bc         pop {r4}
08035C36: 01bc         pop {r0}
08035C38: 0047         bx r0
