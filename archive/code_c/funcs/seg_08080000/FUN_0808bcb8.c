// undefined FUN_0808bcb8(void)
// entry 0x808bcb8


undefined8 FUN_0808bcb8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  byte *pbVar3;
  char *pcVar4;
  undefined4 in_lr;
  undefined4 local_14 [2];
  
  pcVar4 = (char *)(param_1 + 0xbb);
  cVar1 = *pcVar4;
  *pcVar4 = cVar1 + -1;
  if ((char)(cVar1 + -1) == '\0') {
    local_14[0] = *DAT_0808bd50;
    local_14[1] = DAT_0808bd50[1];
    pbVar3 = (byte *)(param_1 + 0xba);
    *pbVar3 = *pbVar3 + 1 & 1;
    FUN_0801cf00(param_1,*(undefined2 *)(local_14 + *pbVar3));
    *pcVar4 = '\x04';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_0808bd58) * 4 + DAT_0808bd54)) * 0x18 + DAT_0808bd5c);
  if ((*(char *)(param_1 + 0xba) == '\0') && (*pcVar4 == '\x01')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}


