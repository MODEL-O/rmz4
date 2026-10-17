// undefined FUN_0803d984(void)
// entry 0x803d984


undefined8 FUN_0803d984(int param_1,char param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  FUN_0803a964(DAT_0803d9dc);
  iVar6 = FUN_08005500(*DAT_0803d9e0);
  iVar4 = DAT_0803dab8;
  iVar3 = DAT_0803da60;
  iVar2 = DAT_0803da20;
  iVar1 = DAT_0803d9e4;
  if (iVar6 != 0) {
    if (param_2 == '\0') {
      if (*(char *)(param_1 + 0xf8) == '\0') {
        *(undefined1 *)(iVar6 + 9) = 3;
        *(undefined4 *)(iVar6 + 0x14) = **(undefined4 **)(iVar1 + 0xc);
        *(byte *)(iVar6 + 0xb) = *(byte *)(iVar6 + 0xb) & 0xbf;
        *(undefined1 *)(iVar6 + 0x25) = 0x10;
        *(undefined2 *)(iVar6 + 0x20) = *DAT_0803d9e8;
        uVar5 = *DAT_0803d9ec;
      }
      else {
        *(undefined1 *)(iVar6 + 9) = 3;
        *(undefined4 *)(iVar6 + 0x14) = **(undefined4 **)(iVar2 + 0xc);
        *(byte *)(iVar6 + 0xb) = *(byte *)(iVar6 + 0xb) & 0xbf;
        *(undefined1 *)(iVar6 + 0x25) = 0x10;
        *(undefined2 *)(iVar6 + 0x20) = *DAT_0803da24;
        uVar5 = *(undefined1 *)(DAT_0803da28 + 1);
      }
      *(undefined1 *)(iVar6 + 0x22) = uVar5;
      uVar5 = 0;
    }
    else {
      if (*(char *)(param_1 + 0xf8) == '\x02') {
        *(undefined1 *)(iVar6 + 9) = 3;
        *(undefined4 *)(iVar6 + 0x14) = **(undefined4 **)(iVar3 + 0xc);
        *(byte *)(iVar6 + 0xb) = *(byte *)(iVar6 + 0xb) & 0xbf;
        *(undefined1 *)(iVar6 + 0x25) = 0x10;
        *(undefined2 *)(iVar6 + 0x20) = *DAT_0803da64;
        uVar5 = *DAT_0803da68;
      }
      else {
        *(undefined1 *)(iVar6 + 9) = 3;
        *(undefined4 *)(iVar6 + 0x14) = **(undefined4 **)(iVar4 + 0xc);
        *(byte *)(iVar6 + 0xb) = *(byte *)(iVar6 + 0xb) & 0xbf;
        *(undefined1 *)(iVar6 + 0x25) = 0x10;
        *(undefined2 *)(iVar6 + 0x20) = *(undefined2 *)(DAT_0803dabc + 2);
        uVar5 = *(undefined1 *)(DAT_0803dac0 + 1);
      }
      *(undefined1 *)(iVar6 + 0x22) = uVar5;
      uVar5 = *(undefined1 *)(param_1 + 0xc3);
    }
    *(undefined1 *)(iVar6 + 0x10) = uVar5;
    *(undefined1 *)(iVar6 + 0x11) = param_3;
    *(int *)(iVar6 + 0xb4) = param_1;
    *(undefined1 *)(param_1 + 0x154) = 0;
  }
  return CONCAT44(in_lr,iVar6);
}


