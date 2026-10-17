// undefined FUN_080da534(void)
// entry 0x80da534


undefined8 FUN_080da534(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080da57c);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080da580;
    *(undefined1 *)(iVar2 + 9) = 0x23;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x8c);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    uVar3 = *param_1;
    uVar4 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = uVar3;
    *(undefined4 *)(iVar2 + 0x58) = uVar4;
    *(undefined4 *)(iVar2 + 100) = uVar3;
    *(undefined4 *)(iVar2 + 0x68) = uVar4;
  }
  return CONCAT44(in_lr,iVar2);
}


