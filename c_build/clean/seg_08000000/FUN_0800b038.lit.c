// undefined FUN_0800b038(void)
// entry 0x800b038


void FUN_0800b038(int param_1)

{
  undefined2 *puVar1;
  ushort uVar2;
  ushort *puVar3;
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar3 = (ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + 0x02000a04);
    *puVar3 = (ushort)0x0000fffc & *puVar3 | 1;
    puVar1 = 0x02000a40;
    (*(undefined2 *)0x02000a40) = (short)0x00003748;
    puVar1[1] = 0x10;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (((*(char *)(param_1 + 0xe) == '\x01') && ((*(byte *)(0x02000ab0 + 0x0002d025) & 1) != 0))
     && (uVar2 = *(short *)(param_1 + 0x10) - 1, *(ushort *)(param_1 + 0x10) = uVar2,
        (uVar2 & 1) == 0)) {
    uVar2 = ((undefined2 *)0x02000a40)[1] & 0x1f;
    if ((((undefined2 *)0x02000a40)[1] & 0x1f) != 0) {
      if (*(int *)(*(int *)(0x0202f610 + 0x000063a8) + 0x54) <= 0x001c5fff) {
        ((undefined2 *)0x02000a40)[1] = uVar2 - 1 & 0x1f | (0x10 - uVar2) * 0x100;
        goto LAB_0800b0ea;
      }
      ((undefined2 *)0x02000a40)[1] = 0x1000;
    }
    *(undefined1 *)(param_1 + 0xe) = 2;
  }
LAB_0800b0ea:
  if (*(char *)(param_1 + 0xe) == '\x02') {
    (*(int *)0x02000a00) = (*(int *)0x02000a00) & ~(ushort)(*(int *)(param_1 + 0x5c) << 8);
    (*(int *)0x02000a40) = 0;
    *(undefined1 *)(param_1 + 0xe) = 3;
  }
  return;
}


