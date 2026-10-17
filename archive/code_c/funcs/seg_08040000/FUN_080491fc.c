// undefined FUN_080491fc(void)
// entry 0x80491fc


undefined4 FUN_080491fc(int param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  undefined4 in_lr;
  
  iVar4 = FUN_08005500(*DAT_08049248);
  iVar1 = DAT_080492a4;
  iVar5 = DAT_0804924c;
  if (iVar4 != 0) {
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined1 *)(iVar4 + 9) = 0x22;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar5 + 0x88);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *DAT_08049250;
      uVar2 = *DAT_08049254;
    }
    else {
      *(undefined1 *)(iVar4 + 9) = 0x22;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar1 + 0x88);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *(undefined2 *)(DAT_080492a8 + 2);
      uVar2 = *(undefined1 *)(DAT_080492ac + 1);
    }
    *(undefined1 *)(iVar4 + 0x22) = uVar2;
    *(int *)(iVar4 + 0x28) = param_2;
    *(int *)(iVar4 + 0x2c) = param_1;
    *(undefined1 *)(iVar4 + 0x10) = 0;
    *(undefined1 *)(iVar4 + 0x11) = param_3;
    bVar3 = *(byte *)(param_2 + 10) >> 4;
    bVar6 = bVar3 & 1;
    if ((bVar3 & 1) == 0) {
      bVar3 = *(byte *)(iVar4 + 10) & 0xef;
    }
    else {
      bVar3 = *(byte *)(iVar4 + 10) | 0x10;
    }
    *(byte *)(iVar4 + 10) = bVar3;
    *(byte *)(iVar4 + 0x4c) = bVar6;
    *(byte *)(iVar4 + 0x4a) = *(byte *)(iVar4 + 0x4a) & 0xef | bVar6 << 4;
    if ((*(byte *)(iVar4 + 10) & 0x10) == 0) {
      iVar5 = *(int *)(param_2 + 0x54) - *(int *)(param_2 + 0x5c);
    }
    else {
      iVar5 = *(int *)(param_2 + 0x54) + *(int *)(param_2 + 0x5c);
    }
    *(int *)(iVar4 + 0x54) = iVar5;
    *(int *)(iVar4 + 0x58) = *(int *)(param_2 + 0x58) + *(int *)(param_2 + 0x60);
  }
  return in_lr;
}


