@ FUN_08037844  entry 0x08037844  size 96
.thumb
.org 0x37844
FUN_08037844:
	push {lr}	@ 00037844 00b5
.org 0x37846
	adds r2, r0, #0	@ 00037846 021c
.org 0x37848
	ldr r0, [pc, #56]	@ 00037848 0e48
.org 0x3784a
	adds r3, r2, r0	@ 0003784a 1318
.org 0x3784c
	ldrb r0, [r3, #0]	@ 0003784c 1878
.org 0x3784e
	movs r1, #4	@ 0003784e 0421
.org 0x37850
	orrs r0, r1	@ 00037850 0843
.org 0x37852
	movs r1, #2	@ 00037852 0221
.org 0x37854
	orrs r0, r1	@ 00037854 0843
.org 0x37856
	strb r0, [r3, #0]	@ 00037856 1870
.org 0x37858
	ldr r1, [pc, #44]	@ 00037858 0b49
.org 0x3785a
	adds r3, r2, r1	@ 0003785a 5318
.org 0x3785c
	ldrb r0, [r3, #0]	@ 0003785c 1878
.org 0x3785e
	subs r0, #1	@ 0003785e 0138
.org 0x37860
	lsls r0, r0, #24	@ 00037860 0006
.org 0x37862
	lsrs r0, r0, #24	@ 00037862 000e
.org 0x37864
	cmp r0, #2	@ 00037864 0228
.org 0x37866
	bhi.n 0x37896	@ 00037866 16d8
.org 0x37868
	adds r1, #86	@ 00037868 5631
.org 0x3786a
	adds r0, r2, r1	@ 0003786a 5018
.org 0x3786c
	ldrb r0, [r0, #0]	@ 0003786c 0078
.org 0x3786e
	cmp r0, #0	@ 0003786e 0028
.org 0x37870
	beq.n 0x3788c	@ 00037870 0cd0
.org 0x37872
	movs r1, #0	@ 00037872 0021
.org 0x37874
	movs r0, #4	@ 00037874 0420
.org 0x37876
	strb r0, [r3, #0]	@ 00037876 1870
.org 0x37878
	movs r3, #129	@ 00037878 8123
.org 0x3787a
	lsls r3, r3, #1	@ 0003787a 5b00
.org 0x3787c
	adds r0, r2, r3	@ 0003787c d018
.org 0x3787e
	strb r1, [r0, #0]	@ 0003787e 0170
.org 0x37880
	b.n 0x37896	@ 00037880 09e0
.org 0x37882
	.byte 0x00	@ 00037882 data
.org 0x37883
	.byte 0x00	@ 00037883 data
.org 0x37884
	.byte 0x53,0x01,0x00,0x00	@ 00037884 data
.org 0x37888
	.byte 0x01,0x01,0x00,0x00	@ 00037888 data
.org 0x3788c
	movs r0, #168	@ 0003788c a820
.org 0x3788e
	lsls r0, r0, #1	@ 0003788e 4000
.org 0x37890
	adds r1, r2, r0	@ 00037890 1118
.org 0x37892
	movs r0, #9	@ 00037892 0920
.org 0x37894
	strb r0, [r1, #0]	@ 00037894 0870
.org 0x37896
	ldr r0, [pc, #24]	@ 00037896 0648
.org 0x37898
	ldr r3, [pc, #24]	@ 00037898 064b
.org 0x3789a
	adds r1, r2, r3	@ 0003789a d118
.org 0x3789c
	ldrb r1, [r1, #0]	@ 0003789c 0978
.org 0x3789e
	lsls r1, r1, #2	@ 0003789e 8900
.org 0x378a0
	adds r1, r1, r0	@ 000378a0 0918
.org 0x378a2
	ldr r1, [r1, #0]	@ 000378a2 0968
