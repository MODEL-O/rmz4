// undefined FUN_0806fc08(void)
// entry 0x806fc08


undefined4 FUN_0806fc08(int param_1)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  FUN_0801cff0();
  puVar2 = DAT_0806fc78;
  if ((*(ushort *)(DAT_0806fc70 + 8) & 8) == 0) {
    iVar4 = *(int *)(param_1 + 0x54) - *(int *)(*DAT_0806fc74 + 0x54);
    do {
      uVar3 = *puVar2 * DAT_0806fc7c + DAT_0806fc80;
      *puVar2 = uVar3 & 0x7fffffff;
      uVar3 = (uVar3 & 0x7fffffff) >> 0x10 & 0xf;
      iVar5 = iVar4;
      if (iVar4 < 0) {
        iVar5 = -iVar4;
      }
      if (DAT_0806fc84 < iVar5) {
        if (uVar3 < 8) goto LAB_0806fc8c;
LAB_0806fc90:
        *(undefined1 *)(param_1 + 0xd) = 6;
      }
      else if (uVar3 < 3) {
LAB_0806fc8c:
        *(undefined1 *)(param_1 + 0xd) = 4;
      }
      else {
        if (0xc < uVar3) goto LAB_0806fc90;
        *(undefined1 *)(param_1 + 0xd) = 5;
      }
      cVar1 = *(char *)(param_1 + 0xc9);
    } while ((cVar1 == *(char *)(param_1 + 0xd)) && (*(char *)(param_1 + 200) == cVar1));
    *(char *)(param_1 + 0xca) = cVar1;
    *(undefined1 *)(param_1 + 0xc9) = *(undefined1 *)(param_1 + 200);
    *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_1 + 0xd);
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


