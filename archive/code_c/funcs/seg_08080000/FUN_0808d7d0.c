// undefined FUN_0808d7d0(void)
// entry 0x808d7d0


undefined4 FUN_0808d7d0(int param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0808d900);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    local_18 = *(undefined4 *)(param_1 + 0x54);
    local_14 = *(int *)(param_1 + 0x58) + DAT_0808d904;
    FUN_080d0dc4(0,&local_18,0x200,0 < *(int *)(param_1 + 0xb4));
    FUN_080d9f1c(param_1,0 < *(int *)(param_1 + 0xb4));
    *(undefined1 *)(param_1 + 0x12) = 0x14;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    local_18 = *(undefined4 *)(param_1 + 0x54);
    local_14 = *(int *)(param_1 + 0x58) + DAT_0808d904;
    uVar3 = DAT_0808d90c * *DAT_0808d908 + DAT_0808d910;
    *DAT_0808d908 = uVar3 & 0x7fffffff;
    uVar3 = (uVar3 & 0x7fffffff) >> 0x10 & 3;
    FUN_080d9fbc(&local_18,0,DAT_0808d914,uVar3,0);
    FUN_080d9fbc(&local_18,0,DAT_0808d918,uVar3,0);
    FUN_080d9fbc(&local_18,0,DAT_0808d91c,uVar3,0);
    FUN_080d0c88(1,&local_18);
    FUN_08002b10(0x2a);
    FUN_0802ab88(3,0x30,param_1 + 0x54);
    if (*(ushort *)(DAT_0808d920 + 0xc) <= DAT_0808d924) {
      *(ushort *)(DAT_0808d920 + 0xc) = *(ushort *)(DAT_0808d920 + 0xc) + 1;
    }
    FUN_0802abe0(param_1,param_1 + 0x54);
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808d928);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  }
  return in_lr;
}


