// undefined FUN_0808f43c(void)
// entry 0x808f43c


undefined4 FUN_0808f43c(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  undefined1 auStack_18 [4];
  
  FUN_08129258(auStack_18,DAT_0808f4dc,2);
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0808fd34(param_1);
    FUN_0801cf00(param_1,DAT_0808f4e0);
    *(undefined1 *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_0808f4e8) * 4 + DAT_0808f4e4)) * 0x18 + DAT_0808f4ec);
  if (*(char *)(param_1 + 0x12) == '\0') {
    if (*(char *)(*(int *)(param_1 + 0xc0) + 0xb5) == '\0') {
      return in_lr;
    }
    uVar2 = 2;
  }
  else {
    if (*(char *)(param_1 + 0x71) != '\x02') {
      return in_lr;
    }
    iVar3 = FUN_0808ff04(param_1,param_1 + 0x54,0,0);
    piVar4 = (int *)(param_1 + 0xc0);
    *piVar4 = iVar3;
    if (iVar3 != 0) {
      *(undefined1 *)(iVar3 + 0xb4) = 1;
      *(undefined1 *)(*piVar4 + 0xb5) = 0;
      *(undefined1 *)(*piVar4 + 0xb7) = auStack_18[bVar1 >> 4 & 1];
      *(undefined1 *)(param_1 + 0x12) = 0;
      return in_lr;
    }
    uVar2 = 3;
  }
  *(undefined1 *)(param_1 + 0xe) = uVar2;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return in_lr;
}


