; undefined FUN_080da534(void)
; entry 0x80da534  size 72 bytes

080DA534: 10b5         push {r4,lr}
080DA536: 041c         add r4,r0,#0x0
080DA538: 1048         ldr r0,[0x080da57c]
080DA53A: 0068         ldr r0,[r0,#0x0]
080DA53C: 2af7e0ff     bl 0x08005500
080DA540: 031c         add r3,r0,#0x0
080DA542: 002b         cmp r3,#0x0
080DA544: 16d0         beq 0x080da574
080DA546: 191c         add r1,r3,#0x0
080DA548: 2531         add r1,#0x25
080DA54A: 0022         mov r2,#0x0
080DA54C: 0120         mov r0,#0x1
080DA54E: 0870         strb r0,[r1,#0x0]
080DA550: 0b48         ldr r0,[0x080da580]
080DA552: 2321         mov r1,#0x23
080DA554: 5972         strb r1,[r3,#0x9]
080DA556: 8c30         add r0,#0x8c
080DA558: 0068         ldr r0,[r0,#0x0]
080DA55A: 0068         ldr r0,[r0,#0x0]
080DA55C: 5861         str r0,[r3,#0x14]
080DA55E: 0020         mov r0,#0x0
080DA560: 1a84         strh r2,[r3,#0x20]
080DA562: 191c         add r1,r3,#0x0
080DA564: 2231         add r1,#0x22
080DA566: 0870         strb r0,[r1,#0x0]
080DA568: 2068         ldr r0,[r4,#0x0]
080DA56A: 6168         ldr r1,[r4,#0x4]
080DA56C: 5865         str r0,[r3,#0x54]
080DA56E: 9965         str r1,[r3,#0x58]
080DA570: 5866         str r0,[r3,#0x64]
080DA572: 9966         str r1,[r3,#0x68]
080DA574: 181c         add r0,r3,#0x0
080DA576: 10bc         pop {r4}
080DA578: 02bc         pop {r1}
080DA57A: 0847         bx r1
