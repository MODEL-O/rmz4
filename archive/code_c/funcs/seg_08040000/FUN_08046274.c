// undefined FUN_08046274(void)
// entry 0x8046274


undefined4 FUN_08046274(int param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = FUN_08005500(*DAT_080462c0);
  iVar2 = DAT_0804630c;
  iVar1 = DAT_080462c4;
  if (iVar4 != 0) {
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined1 *)(iVar4 + 9) = 0x18;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar1 + 0x60);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *DAT_080462c8;
      uVar3 = *DAT_080462cc;
    }
    else {
      *(undefined1 *)(iVar4 + 9) = 0x18;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar2 + 0x60);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *(undefined2 *)(DAT_08046310 + 2);
      uVar3 = *(undefined1 *)(DAT_08046314 + 1);
    }
    *(undefined1 *)(iVar4 + 0x22) = uVar3;
    *(undefined4 *)(iVar4 + 0x28) = param_2;
    *(int *)(iVar4 + 0x2c) = param_1;
    *(undefined1 *)(iVar4 + 0x10) = 1;
    *(undefined1 *)(iVar4 + 0x11) = param_3;
  }
  return in_lr;
}


