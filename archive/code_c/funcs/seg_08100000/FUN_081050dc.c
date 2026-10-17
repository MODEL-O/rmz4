// undefined FUN_081050dc(void)
// entry 0x81050dc


undefined4 FUN_081050dc(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_08105148);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 0x1e;
    iVar1 = DAT_0810514c;
    *(undefined1 *)(iVar2 + 9) = 0x4e;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x138);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined1 *)(iVar2 + 0x1d) = *(undefined1 *)(iVar2 + 0x1c);
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(char *)(iVar2 + 0x10) = (char)((uint)param_2 >> 8);
    *(char *)(iVar2 + 0x11) = (char)param_2;
    *(int *)(iVar2 + 0x28) = param_3;
    *(char *)(iVar2 + 0x12) = (char)*(undefined4 *)(param_3 + DAT_08105150 + 0x28) * '\f';
  }
  return in_lr;
}


