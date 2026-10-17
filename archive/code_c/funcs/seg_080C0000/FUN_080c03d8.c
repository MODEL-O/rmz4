// undefined FUN_080c03d8(void)
// entry 0x80c03d8


undefined4 FUN_080c03d8(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  undefined4 in_lr;
  sbyte local_20 [4];
  sbyte local_1c [8];
  
  FUN_08129258(local_20,DAT_080c0440,3);
  FUN_08129258(local_1c,DAT_080c0444,5);
  bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + 10) >> 4;
  bVar4 = bVar1 & 1;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c0448);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  *(undefined2 *)(param_1 + 0xb4) = 0;
  *(undefined2 *)(param_1 + 0xb6) = 0;
  FUN_0801cc9c(param_1);
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4c) = bVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar4 << 4;
  iVar3 = FUN_080c0364(param_1,1,0,0);
  if (iVar3 != 0) {
    *(ushort *)(param_1 + 0xb6) = *(ushort *)(param_1 + 0xb6) | 1;
  }
  iVar3 = FUN_080c0364(param_1,1,1,0);
  if (iVar3 != 0) {
    *(ushort *)(param_1 + 0xb6) = *(ushort *)(param_1 + 0xb6) | 2;
  }
  uVar5 = 0;
  do {
    iVar3 = FUN_080c0364(param_1,2,0,uVar5 & 0xff);
    if (iVar3 != 0) {
      *(ushort *)(param_1 + 0xb6) = (ushort)(1 << local_20[uVar5]) | *(ushort *)(param_1 + 0xb6);
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 3);
  uVar5 = 0;
  do {
    iVar3 = FUN_080c0364(param_1,2,1,uVar5 & 0xff);
    if (iVar3 != 0) {
      *(ushort *)(param_1 + 0xb6) = (ushort)(1 << local_1c[uVar5]) | *(ushort *)(param_1 + 0xb6);
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 5);
  FUN_080c062c(param_1);
  return in_lr;
}


