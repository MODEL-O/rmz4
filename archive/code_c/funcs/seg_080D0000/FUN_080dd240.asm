; undefined FUN_080dd240(void)
; entry 0x80dd240  size 64 bytes

080DD240: 30b5         push {r4,r5,lr}
080DD242: 051c         add r5,r0,#0x0
080DD244: ac6a         ldr r4,[r5,#0x28]
080DD246: 3ff7d3fe     bl 0x0801cff0
080DD24A: 606d         ldr r0,[r4,#0x54]
080DD24C: a16d         ldr r1,[r4,#0x58]
080DD24E: 6865         str r0,[r5,#0x54]
080DD250: a965         str r1,[r5,#0x58]
080DD252: a07f         ldrb r0,[r4,#0x1e]
080DD254: 0002         lsl r0,r0,#0x8
080DD256: 7034         add r4,#0x70
080DD258: 2178         ldrb r1,[r4,#0x0]
080DD25A: 0843         orr r0,r1
080DD25C: 0849         ldr r1,[0x080dd280]
080DD25E: 8842         cmp r0,r1
080DD260: 0bd0         beq 0x080dd27a
080DD262: 0849         ldr r1,[0x080dd284]
080DD264: 687a         ldrb r0,[r5,#0x9]
080DD266: 8000         lsl r0,r0,#0x2
080DD268: 4018         add r0,r0,r1
080DD26A: 0221         mov r1,#0x2
080DD26C: e960         str r1,[r5,#0xc]
080DD26E: 0068         ldr r0,[r0,#0x0]
080DD270: 8068         ldr r0,[r0,#0x8]
080DD272: 6861         str r0,[r5,#0x14]
080DD274: 281c         add r0,r5,#0x0
080DD276: fff7bbfd     bl 0x080dcdf0
080DD27A: 30bc         pop {r4,r5}
080DD27C: 01bc         pop {r0}
080DD27E: 0047         bx r0
