// undefined FUN_08049738(void)
// entry 0x8049738


undefined8 FUN_08049738(int param_1,undefined4 *param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  iVar4 = FUN_08005500(*DAT_08049784);
  iVar2 = DAT_080497d8;
  iVar1 = DAT_08049788;
  if (iVar4 != 0) {
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined1 *)(iVar4 + 9) = 0x23;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar1 + 0x8c);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *DAT_0804978c;
      uVar3 = *DAT_08049790;
    }
    else {
      *(undefined1 *)(iVar4 + 9) = 0x23;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar2 + 0x8c);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *(undefined2 *)(DAT_080497dc + 2);
      uVar3 = *(undefined1 *)(DAT_080497e0 + 1);
    }
    *(undefined1 *)(iVar4 + 0x22) = uVar3;
    *(int *)(iVar4 + 0x28) = param_1;
    uVar5 = param_2[1];
    *(undefined4 *)(iVar4 + 0x54) = *param_2;
    *(undefined4 *)(iVar4 + 0x58) = uVar5;
    *(undefined1 *)(iVar4 + 0x10) = 1;
    *(undefined1 *)(iVar4 + 0x11) = param_3;
  }
  return CONCAT44(in_lr,iVar4);
}


