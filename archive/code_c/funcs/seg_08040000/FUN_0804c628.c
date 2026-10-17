// undefined FUN_0804c628(void)
// entry 0x804c628


undefined4 FUN_0804c628(int param_1,int param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined4 in_lr;
  
  iVar5 = FUN_08005500(*DAT_0804c678);
  iVar2 = DAT_0804c6d4;
  iVar1 = DAT_0804c67c;
  if (iVar5 != 0) {
    if (*(char *)(param_1 + 0xf8) == '\0') {
      *(undefined1 *)(iVar5 + 9) = 0x2d;
      *(undefined4 *)(iVar5 + 0x14) = **(undefined4 **)(iVar1 + 0xb4);
      *(byte *)(iVar5 + 0xb) = *(byte *)(iVar5 + 0xb) & 0xbf;
      *(undefined1 *)(iVar5 + 0x25) = 0x10;
      *(undefined2 *)(iVar5 + 0x20) = *DAT_0804c680;
      uVar3 = *DAT_0804c684;
    }
    else {
      *(undefined1 *)(iVar5 + 9) = 0x2d;
      *(undefined4 *)(iVar5 + 0x14) = **(undefined4 **)(iVar2 + 0xb4);
      *(byte *)(iVar5 + 0xb) = *(byte *)(iVar5 + 0xb) & 0xbf;
      *(undefined1 *)(iVar5 + 0x25) = 0x10;
      *(undefined2 *)(iVar5 + 0x20) = *(undefined2 *)(DAT_0804c6d8 + 2);
      uVar3 = *(undefined1 *)(DAT_0804c6dc + 1);
    }
    *(undefined1 *)(iVar5 + 0x22) = uVar3;
    *(int *)(iVar5 + 0x28) = param_1;
    *(int *)(iVar5 + 0x2c) = param_2;
    uVar6 = *(undefined4 *)(param_2 + 0x58);
    *(undefined4 *)(iVar5 + 0x54) = *(undefined4 *)(param_2 + 0x54);
    *(undefined4 *)(iVar5 + 0x58) = uVar6;
    bVar4 = *(byte *)(param_2 + 10) >> 4;
    bVar7 = bVar4 & 1;
    if ((bVar4 & 1) == 0) {
      bVar4 = *(byte *)(iVar5 + 10) & 0xef;
    }
    else {
      bVar4 = *(byte *)(iVar5 + 10) | 0x10;
    }
    *(byte *)(iVar5 + 10) = bVar4;
    *(byte *)(iVar5 + 0x4c) = bVar7;
    *(byte *)(iVar5 + 0x4a) = *(byte *)(iVar5 + 0x4a) & 0xef | bVar7 << 4;
    *(undefined1 *)(iVar5 + 0x10) = param_3;
    *(undefined1 *)(iVar5 + 0x11) = param_4;
  }
  return in_lr;
}


