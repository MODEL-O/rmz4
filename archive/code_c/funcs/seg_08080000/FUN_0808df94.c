// undefined FUN_0808df94(void)
// entry 0x808df94


undefined4 FUN_0808df94(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    if ((*(byte *)(*(int *)(param_1 + 0x28) + 0xb6) & 1) == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(byte *)(*(int *)(param_1 + 100) + 10) = *(byte *)(*(int *)(param_1 + 100) + 10) & 0xfe;
      *(byte *)(*(int *)(param_1 + 0x68) + 10) = *(byte *)(*(int *)(param_1 + 0x68) + 10) & 0xfe;
      *(byte *)(*(int *)(param_1 + 0x2c) + 10) = *(byte *)(*(int *)(param_1 + 0x2c) + 10) & 0xfe;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(byte *)(*(int *)(param_1 + 100) + 10) = *(byte *)(*(int *)(param_1 + 100) + 10) | 1;
      *(byte *)(*(int *)(param_1 + 0x68) + 10) = *(byte *)(*(int *)(param_1 + 0x68) + 10) | 1;
      *(byte *)(*(int *)(param_1 + 0x2c) + 10) = *(byte *)(*(int *)(param_1 + 0x2c) + 10) | 1;
    }
    cVar1 = *(char *)(param_1 + 0xb8);
    if (cVar1 != *(char *)(param_1 + 0xd)) {
      *(char *)(param_1 + 0xd) = cVar1;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
      *(char *)(param_1 + 0xb8) = cVar1;
      *(undefined1 *)(*(int *)(param_1 + 100) + 0xd) = *(undefined1 *)(param_1 + 0xd);
      *(undefined1 *)(*(int *)(param_1 + 100) + 0xe) = 0;
      *(undefined1 *)(*(int *)(param_1 + 100) + 0xf) = 0;
      *(undefined2 *)(*(int *)(param_1 + 100) + 0xba) = *(undefined2 *)(param_1 + 0xbc);
    }
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0808e05c));
  }
  else {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808dfbc);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_0808e6e0(param_1);
  }
  return in_lr;
}


