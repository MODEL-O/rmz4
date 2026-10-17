// undefined FUN_0804a790(void)
// entry 0x804a790


undefined8 FUN_0804a790(int param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined4 in_lr;
  
  iVar5 = FUN_08005500(*DAT_0804a7e0);
  iVar2 = DAT_0804a844;
  iVar1 = DAT_0804a7e4;
  if (iVar5 != 0) {
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined1 *)(iVar5 + 9) = 0x26;
      *(undefined4 *)(iVar5 + 0x14) = **(undefined4 **)(iVar1 + 0x98);
      *(byte *)(iVar5 + 0xb) = *(byte *)(iVar5 + 0xb) & 0xbf;
      *(undefined1 *)(iVar5 + 0x25) = 0x10;
      *(undefined2 *)(iVar5 + 0x20) = *DAT_0804a7e8;
      uVar3 = *DAT_0804a7ec;
    }
    else {
      *(undefined1 *)(iVar5 + 9) = 0x26;
      *(undefined4 *)(iVar5 + 0x14) = **(undefined4 **)(iVar2 + 0x98);
      *(byte *)(iVar5 + 0xb) = *(byte *)(iVar5 + 0xb) & 0xbf;
      *(undefined1 *)(iVar5 + 0x25) = 0x10;
      *(undefined2 *)(iVar5 + 0x20) = *(undefined2 *)(DAT_0804a848 + 2);
      uVar3 = *(undefined1 *)(DAT_0804a84c + 1);
    }
    *(undefined1 *)(iVar5 + 0x22) = uVar3;
    *(int *)(iVar5 + 0x28) = param_1;
    *(int *)(iVar5 + 0x2c) = param_2;
    uVar6 = *(undefined4 *)(param_2 + 0x68);
    *(undefined4 *)(iVar5 + 0x54) = *(undefined4 *)(param_2 + 100);
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
    *(undefined1 *)(iVar5 + 0x10) = 1;
    *(undefined1 *)(iVar5 + 0x11) = param_3;
  }
  return CONCAT44(in_lr,iVar5);
}


