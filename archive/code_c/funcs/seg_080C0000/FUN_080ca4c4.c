// undefined FUN_080ca4c4(void)
// entry 0x80ca4c4


undefined4 FUN_080ca4c4(int param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined4 in_lr;
  
  iVar3 = FUN_08005500(*DAT_080ca520);
  if (iVar3 != 0) {
    *(undefined1 *)(iVar3 + 0x25) = 8;
    iVar1 = DAT_080ca524;
    *(undefined1 *)(iVar3 + 9) = 0x23;
    *(undefined4 *)(iVar3 + 0x14) = **(undefined4 **)(iVar1 + 0x8c);
    *(undefined2 *)(iVar3 + 0x20) = 0;
    *(undefined1 *)(iVar3 + 0x22) = 0;
    *(int *)(iVar3 + 0x28) = param_1;
    uVar4 = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar3 + 0x58) = uVar4;
    bVar2 = *(byte *)(param_1 + 10) >> 4;
    bVar5 = bVar2 & 1;
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(iVar3 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(iVar3 + 10) | 0x10;
    }
    *(byte *)(iVar3 + 10) = bVar2;
    *(byte *)(iVar3 + 0x4c) = bVar5;
    *(byte *)(iVar3 + 0x4a) = *(byte *)(iVar3 + 0x4a) & 0xef | bVar5 << 4;
    *(undefined1 *)(iVar3 + 0x10) = param_2;
    *(undefined1 *)(iVar3 + 0x11) = param_3;
  }
  return in_lr;
}


