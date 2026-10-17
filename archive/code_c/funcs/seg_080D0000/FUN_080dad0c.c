// undefined FUN_080dad0c(void)
// entry 0x80dad0c


undefined8 FUN_080dad0c(int *param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080dad94);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080dad98;
    *(undefined1 *)(iVar2 + 9) = 0x27;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x9c);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(int *)(iVar2 + 0x54) = *param_1;
    *(int *)(iVar2 + 0x58) = param_1[1] + DAT_080dad9c;
    *(int *)(iVar2 + 100) = *param_1 + 0x1000;
    *(int *)(iVar2 + 0x68) = param_1[1];
    *(int *)(iVar2 + 0x5c) = *param_1;
    *(int *)(iVar2 + 0x60) = param_1[1] + 0x1000;
    *(int *)(iVar2 + 0x7c) = *param_1 + DAT_080dad9c;
    *(int *)(iVar2 + 0x80) = param_1[1];
    *(undefined1 *)(iVar2 + 0x10) = param_2;
    *(undefined1 *)(iVar2 + 0x11) = param_3;
    *(undefined1 *)(iVar2 + 0x78) = 0x31;
    *(undefined1 *)(iVar2 + 0x79) = 0xe;
  }
  return CONCAT44(in_lr,iVar2);
}


