// undefined FUN_080ab848(void)
// entry 0x80ab848


undefined8 FUN_080ab848(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined4 in_lr;
  
  iVar3 = FUN_08005500(*DAT_080ab8b0);
  if (iVar3 != 0) {
    *(undefined1 *)(iVar3 + 0x25) = 0x18;
    iVar2 = DAT_080ab8b4;
    *(undefined1 *)(iVar3 + 9) = 0x49;
    *(undefined4 *)(iVar3 + 0x14) = **(undefined4 **)(iVar2 + 0x124);
    *(undefined2 *)(iVar3 + 0x20) = 0;
    *(undefined1 *)(iVar3 + 0x22) = 0;
    *(byte *)(iVar3 + 0xb) = *(byte *)(iVar3 + 0xb) | 0x10;
    *(undefined1 *)(iVar3 + 0x1d) = *(undefined1 *)(iVar3 + 0x1c);
    *(int *)(iVar3 + 0x28) = param_1;
    uVar4 = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar3 + 0x58) = uVar4;
    bVar1 = *(byte *)(param_1 + 10) >> 4;
    bVar5 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xef;
    }
    else {
      *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) | 0x10;
    }
    *(byte *)(iVar3 + 0x4c) = bVar5;
    *(byte *)(iVar3 + 0x4a) = *(byte *)(iVar3 + 0x4a) & 0xef | bVar5 << 4;
    *(undefined1 *)(iVar3 + 0x10) = 0;
    *(undefined1 *)(iVar3 + 0x11) = 0;
  }
  return CONCAT44(in_lr,iVar3);
}


