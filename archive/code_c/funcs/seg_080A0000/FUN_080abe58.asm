; undefined FUN_080abe58(void)
; entry 0x80abe58  size 26 bytes

080ABE58: 00b5         push {lr}
080ABE5A: 064a         ldr r2,[0x080abe74]
080ABE5C: 0021         mov r1,#0x0
080ABE5E: 1180         strh r1,[r2,#0x0]
080ABE60: 054b         ldr r3,[0x080abe78]
080ABE62: 1a88         ldrh r2,[r3,#0x0]
080ABE64: 0549         ldr r1,[0x080abe7c]
080ABE66: 1140         and r1,r2
080ABE68: 1980         strh r1,[r3,#0x0]
080ABE6A: d3f73ffd     bl 0x0807f8ec
080ABE6E: 01bc         pop {r0}
080ABE70: 0047         bx r0
