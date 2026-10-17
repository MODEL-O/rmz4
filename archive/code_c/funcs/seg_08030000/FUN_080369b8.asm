; undefined FUN_080369b8(void)
; entry 0x80369b8  size 64 bytes

080369B8: 10b5         push {r4,lr}
080369BA: 041c         add r4,r0,#0x0
080369BC: 0e48         ldr r0,[0x080369f8]
080369BE: 2218         add r2,r4,r0
080369C0: 1078         ldrb r0,[r2,#0x0]
080369C2: 0421         mov r1,#0x4
080369C4: 0843         orr r0,r1
080369C6: 0221         mov r1,#0x2
080369C8: 0843         orr r0,r1
080369CA: 1070         strb r0,[r2,#0x0]
080369CC: 0b49         ldr r1,[0x080369fc]
080369CE: 0c4a         ldr r2,[0x08036a00]
080369D0: a018         add r0,r4,r2
080369D2: 0078         ldrb r0,[r0,#0x0]
080369D4: 8000         lsl r0,r0,#0x2
080369D6: 4018         add r0,r0,r1
080369D8: 0168         ldr r1,[r0,#0x0]
080369DA: 201c         add r0,r4,#0x0
080369DC: f2f0d0fa     bl 0x08128f80
080369E0: 0849         ldr r1,[0x08036a04]
080369E2: 094a         ldr r2,[0x08036a08]
080369E4: a018         add r0,r4,r2
080369E6: 0078         ldrb r0,[r0,#0x0]
080369E8: 4018         add r0,r0,r1
080369EA: 0178         ldrb r1,[r0,#0x0]
080369EC: 073a         sub r2,#0x7
080369EE: a018         add r0,r4,r2
080369F0: 0170         strb r1,[r0,#0x0]
080369F2: 10bc         pop {r4}
080369F4: 01bc         pop {r0}
080369F6: 0047         bx r0
