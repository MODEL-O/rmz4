; undefined FUN_080cf130(void)
; entry 0x80cf130  size 66 bytes

080CF130: 30b5         push {r4,r5,lr}
080CF132: 051c         add r5,r0,#0x0
080CF134: ac6a         ldr r4,[r5,#0x28]
080CF136: 4df75bff     bl 0x0801cff0
080CF13A: 686d         ldr r0,[r5,#0x54]
080CF13C: a96d         ldr r1,[r5,#0x58]
080CF13E: 39f7f9f9     bl 0x08008534
080CF142: a865         str r0,[r5,#0x58]
080CF144: a07f         ldrb r0,[r4,#0x1e]
080CF146: 0002         lsl r0,r0,#0x8
080CF148: 7034         add r4,#0x70
080CF14A: 2178         ldrb r1,[r4,#0x0]
080CF14C: 0843         orr r0,r1
080CF14E: 0949         ldr r1,[0x080cf174]
080CF150: 8842         cmp r0,r1
080CF152: 0bd0         beq 0x080cf16c
080CF154: 0849         ldr r1,[0x080cf178]
080CF156: 687a         ldrb r0,[r5,#0x9]
080CF158: 8000         lsl r0,r0,#0x2
080CF15A: 4018         add r0,r0,r1
080CF15C: 0221         mov r1,#0x2
080CF15E: e960         str r1,[r5,#0xc]
080CF160: 0068         ldr r0,[r0,#0x0]
080CF162: 8068         ldr r0,[r0,#0x8]
080CF164: 6861         str r0,[r5,#0x14]
080CF166: 281c         add r0,r5,#0x0
080CF168: fff7e8fe     bl 0x080cef3c
080CF16C: 30bc         pop {r4,r5}
080CF16E: 01bc         pop {r0}
080CF170: 0047         bx r0
