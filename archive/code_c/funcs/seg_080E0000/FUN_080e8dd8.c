// undefined FUN_080e8dd8(void)
// entry 0x80e8dd8


undefined8 FUN_080e8dd8(undefined4 *param_1,uint param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = param_2 & 0xffff;
  iVar2 = FUN_08005500(*DAT_080e8e48);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080e8e4c;
    *(undefined1 *)(iVar2 + 9) = 0x5c;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x170);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(char *)(iVar2 + 0x10) = (char)(param_2 >> 8);
    *(char *)(iVar2 + 0x11) = (char)uVar4;
    *(undefined2 *)(iVar2 + 0x74) = param_3;
    *(undefined4 **)(iVar2 + 0x28) = param_1;
    if ((uVar4 == DAT_080e8e50) || (uVar4 == DAT_080e8e50 + 0xfd)) {
      *(undefined1 *)(iVar2 + 0x12) = 0x1e;
    }
    else {
      *(undefined1 *)(iVar2 + 0x12) = 0;
    }
    *(undefined1 *)(iVar2 + 0x7c) = 0;
  }
  return CONCAT44(in_lr,iVar2);
}


