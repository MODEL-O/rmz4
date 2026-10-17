// undefined FUN_080ce040(void)
// entry 0x80ce040


undefined4 FUN_080ce040(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  FUN_0801cff0();
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar3 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar3;
  if (DAT_080ce0ac < iVar3) {
    *(int *)(param_1 + 0x5c) = DAT_080ce0ac;
    if (*(char *)(param_1 + 0x12) == '\0') {
      if (*(byte *)(param_1 + 0x13) < 4) {
        if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
          iVar3 = param_1 + 0x54;
          FUN_080cdd9c(uVar4,iVar3,1,0);
          FUN_080cdd9c(uVar4,iVar3,1,1);
          FUN_080cdd9c(uVar4,iVar3,1,2);
          FUN_080cdd9c(uVar4,iVar3,1,3);
        }
        else {
          iVar3 = param_1 + 0x54;
          FUN_080cdd9c(uVar4,iVar3,1,4);
          FUN_080cdd9c(uVar4,iVar3,1,5);
          FUN_080cdd9c(uVar4,iVar3,1,6);
          FUN_080cdd9c(uVar4,iVar3,1,7);
        }
        FUN_08002b10(DAT_080ce12c);
      }
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      *(undefined1 *)(param_1 + 0x12) = 0x28;
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  uVar1 = FUN_0801fb14(DAT_080ce130,param_1 + 0x54);
  if (0x3000 < uVar1) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ce134);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080cde30(param_1);
  }
  return in_lr;
}


