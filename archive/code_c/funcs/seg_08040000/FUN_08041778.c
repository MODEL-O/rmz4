// undefined FUN_08041778(void)
// entry 0x8041778


undefined8 FUN_08041778(int param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = FUN_08005500(*DAT_080417c4);
  iVar2 = DAT_08041810;
  iVar1 = DAT_080417c8;
  if (iVar4 != 0) {
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined1 *)(iVar4 + 9) = 0xc;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar1 + 0x30);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *DAT_080417cc;
      uVar3 = *DAT_080417d0;
    }
    else {
      *(undefined1 *)(iVar4 + 9) = 0xc;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar2 + 0x30);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *(undefined2 *)(DAT_08041814 + 2);
      uVar3 = *(undefined1 *)(DAT_08041818 + 1);
    }
    *(undefined1 *)(iVar4 + 0x22) = uVar3;
    *(int *)(iVar4 + 0x28) = param_1;
    *(undefined4 *)(iVar4 + 0x2c) = param_2;
    *(undefined1 *)(iVar4 + 0x10) = 2;
    *(undefined1 *)(iVar4 + 0x11) = param_3;
  }
  return CONCAT44(in_lr,iVar4);
}


