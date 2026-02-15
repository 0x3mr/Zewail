import { test, expect } from "@playwright/test";

test("counter flow", async ({ page }) => {
  await page.goto("http://localhost:5173");
  await page.click("text=+");
  await page.click("text=+");
  await page.click("text=Reset");
  await expect(page.locator("text=Value: 0")).toBeVisible();
});
