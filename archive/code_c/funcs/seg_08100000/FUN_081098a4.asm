; undefined FUN_081098a4(void)
; entry 0x81098a4  size 44 bytes

081098A4: 10b5         push {r4,lr}
081098A6: 041c         add r4,r0,#0x0
081098A8: 5430         add r0,#0x54
081098AA: 0021         mov r1,#0x0
081098AC: d6f73af8     bl 0x080df924
081098B0: a17a         ldrb r1,[r4,#0xa]
081098B2: fe20         mov r0,#0xfe
081098B4: 0840         and r0,r1
081098B6: a072         strb r0,[r4,#0xa]
081098B8: 0549         ldr r1,[0x081098d0]
081098BA: 607a         ldrb r0,[r4,#0x9]
081098BC: 8000         lsl r0,r0,#0x2
081098BE: 4018         add r0,r0,r1
081098C0: 0421         mov r1,#0x4
081098C2: e160         str r1,[r4,#0xc]
081098C4: 0068         ldr r0,[r0,#0x0]
081098C6: 0069         ldr r0,[r0,#0x10]
081098C8: 6061         str r0,[r4,#0x14]
081098CA: 10bc         pop {r4}
081098CC: 01bc         pop {r0}
081098CE: 0047         bx r0
