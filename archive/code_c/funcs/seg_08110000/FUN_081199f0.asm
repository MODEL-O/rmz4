; undefined FUN_081199f0(void)
; entry 0x81199f0  size 26 bytes

081199F0: 00b5         push {lr}
081199F2: 021c         add r2,r0,#0x0
081199F4: 0906         lsl r1,r1,#0x18
081199F6: 090e         lsr r1,r1,#0x18
081199F8: 0729         cmp r1,#0x7
081199FA: 37d8         bhi 0x08119a6c
081199FC: 8800         lsl r0,r1,#0x2
081199FE: 0249         ldr r1,[0x08119a08]
08119A00: 4018         add r0,r0,r1
08119A02: 0068         ldr r0,[r0,#0x0]
08119A04: 8746         mov pc,r0
08119A6C: 02bc         pop {r1}
08119A6E: 0847         bx r1
