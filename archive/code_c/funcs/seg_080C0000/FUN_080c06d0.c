// undefined FUN_080c06d0(void)
// entry 0x80c06d0


undefined4 FUN_080c06d0(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar4 + 10) >> 4;
  bVar5 = bVar1 & 1;
  if (*(byte *)(iVar4 + 0xc) < 2) {
    if (*(char *)(param_1 + 0xd) != *(char *)(iVar4 + 0xd)) {
      *(char *)(param_1 + 0xd) = *(char *)(iVar4 + 0xd);
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    if (*(char *)(param_1 + 0x11) == '\0') {
      iVar3 = DAT_080c0738;
      if ((*(byte *)(iVar4 + 10) & 0x10) != 0) {
        iVar3 = 0x1600;
      }
      *(int *)(param_1 + 0x54) = *(int *)(iVar4 + 0x54) + iVar3;
      iVar3 = *(int *)(iVar4 + 0x58);
      iVar4 = DAT_080c073c;
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
      iVar3 = *(int *)(iVar4 + 0x58);
      iVar4 = DAT_080c075c;
    }
    *(int *)(param_1 + 0x58) = iVar3 + iVar4;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x4c) = bVar5;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar5 << 4;
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080c079c));
  }
  else {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c0700);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080c0c74(param_1);
  }
  return in_lr;
}


