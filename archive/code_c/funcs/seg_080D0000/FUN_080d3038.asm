; undefined FUN_080d3038(void)
; entry 0x80d3038  size 58 bytes

080D3038: 10b5         push {r4,lr}
080D303A: 041c         add r4,r0,#0x0
080D303C: 49f7d8ff     bl 0x0801cff0
080D3040: 606d         ldr r0,[r4,#0x54]
080D3042: e16d         ldr r1,[r4,#0x5c]
080D3044: 4018         add r0,r0,r1
080D3046: 6065         str r0,[r4,#0x54]
080D3048: a06d         ldr r0,[r4,#0x58]
080D304A: 216e         ldr r1,[r4,#0x60]
080D304C: 4018         add r0,r0,r1
080D304E: a065         str r0,[r4,#0x58]
080D3050: 201c         add r0,r4,#0x0
080D3052: 7330         add r0,#0x73
080D3054: 0078         ldrb r0,[r0,#0x0]
080D3056: 0328         cmp r0,#0x3
080D3058: 08d1         bne 0x080d306c
080D305A: 0649         ldr r1,[0x080d3074]
080D305C: 607a         ldrb r0,[r4,#0x9]
080D305E: 8000         lsl r0,r0,#0x2
080D3060: 4018         add r0,r0,r1
080D3062: 0221         mov r1,#0x2
080D3064: e160         str r1,[r4,#0xc]
080D3066: 0068         ldr r0,[r0,#0x0]
080D3068: 8068         ldr r0,[r0,#0x8]
080D306A: 6061         str r0,[r4,#0x14]
080D306C: 10bc         pop {r4}
080D306E: 01bc         pop {r0}
080D3070: 0047         bx r0
