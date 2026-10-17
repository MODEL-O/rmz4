// undefined FUN_080e9884(void)
// entry 0x80e9884


undefined4 FUN_080e9884(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080e994c);
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    FUN_080d4c8c(param_1 + 0x54,DAT_080e9950,0,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  iVar2 = DAT_080e9958;
  iVar1 = DAT_080e9954;
  if (cVar3 == -1) {
    local_18 = *(int *)(param_1 + 0x54) + 0xb00;
    local_14 = *(int *)(param_1 + 0x58) + DAT_080e9954;
    FUN_080d4c8c(&local_18,DAT_080e9958,0,0);
    local_18 = *(int *)(param_1 + 0x54);
    local_14 = *(int *)(param_1 + 0x58) + iVar1;
    FUN_080d4c8c(&local_18,iVar2 + 0x1c,0,0);
    local_18 = *(int *)(param_1 + 0x54) + DAT_080e995c;
    local_14 = *(int *)(param_1 + 0x58) + 0x100;
    FUN_080d4c8c(&local_18,iVar2 + 0x38,0,0);
    local_18 = *(int *)(param_1 + 0x54) + 0xa00;
    local_14 = *(int *)(param_1 + 0x58) + DAT_080e9960;
    FUN_080d0c88(1,&local_18);
    if (*(int *)(DAT_080e9964 + DAT_080e9968) < *(int *)(param_1 + 0x58)) {
      FUN_08002b10(0x31);
    }
    else {
      FUN_08002b10(0x2a);
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e9994);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0x10);
  }
  return in_lr;
}


