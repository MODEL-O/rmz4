// undefined FUN_080c0644(void)
// entry 0x80c0644


undefined4 FUN_080c0644(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar5 + 10) >> 4;
  bVar4 = bVar1 & 1;
  if (*(byte *)(iVar5 + 0xc) < 2) {
    if (*(char *)(param_1 + 0xd) != *(char *)(param_1 + 0xb8)) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xb8);
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
      *(undefined2 *)(param_1 + 0xb4) = 0;
    }
    uVar3 = *(undefined4 *)(iVar5 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x4c) = bVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar4 << 4;
  }
  else {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c0674);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080c0c74(param_1);
  }
  return in_lr;
}


